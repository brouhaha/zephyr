#include <kernel.h>
#include <arch/cpu.h>
#include <board.h>


// inline assembly for custom instructions
// see https://github.com/riscv/riscv-gnu-toolchain/issues/190

#define STR1(x) #x
#define STR(x) STR1(x)
#define EXTRACT(a, size, offset) (((~(~0 << size) << offset) & a) >> offset)

#define CUSTOMX_OPCODE(x) CUSTOM_##x
#define CUSTOM_0 0b0001011
#define CUSTOM_1 0b0101011
#define CUSTOM_2 0b1011011
#define CUSTOM_3 0b1111011

#define CUSTOMX(X, rd, rs1, rs2, funct) \
  CUSTOMX_OPCODE(X)                    | \
  (rd                   << (7))       | \
  (EXTRACT(funct, 3, 0) << (7+5))     |	\
  (rs1                  << (7+5+3))   | \
  (rs2                  << (7+5+3+5)) | \
  (EXTRACT(funct, 7, 3) << (7+5+3+5+5))

// Standard macro that passes rd, rs1, and rs2 via registers
#define ROCC_INSTRUCTION(X, rd, rs1, rs2, funct)		\
  ROCC_INSTRUCTION_R_R_R(X, rd, rs1, rs2, funct, 10, 11, 12)

// rd, rs1, and rs2 are data
// rd_n, rs_1, and rs2_n are the register numbers to use
#define ROCC_INSTRUCTION_R_R_R(X, rd, rs1, rs2, funct, rd_n, rs1_n, rs2_n) { \
    register uint32_t rd_  asm ("x" # rd_n);                            \
    register uint32_t rs1_ asm ("x" # rs1_n) = (uint32_t) rs1;          \
    register uint32_t rs2_ asm ("x" # rs2_n) = (uint32_t) rs2;          \
    asm volatile (                                                      \
	  ".word " STR(CUSTOMX(X, rd_n, rs1_n, rs2_n, funct)) "\n\t"    \
        : "=r" (rd_)                                                    \
        : [_rs1] "r" (rs1_), [_rs2] "r" (rs2_));                        \
    rd = rd_;                                                           \
  }

#define FUNCT_DO_WRITE 0
#define XCUSTOM_UARTTX 0
#define doUartTx(y, data) \
  ROCC_INSTRUCTION(XCUSTOM_UARTTX, y, data, data, FUNCT_DO_WRITE)


static unsigned char uart_glacial_poll_out(struct device *dev,
					   unsigned char c)
{
  (void) dev;
  uint32_t y;
  doUartTx(y, c);
  (void) y;
  return c;
}

static int uart_glacial_poll_in(struct device *dev, unsigned char *c)
{
  (void) dev;
  (void) c;
	return -1;
}

static int uart_glacial_init(struct device *dev)
{
  (void) dev;
	/* Nothing to do */
	return 0;
}

static const struct uart_driver_api uart_glacial_driver_api = {
	.poll_in = uart_glacial_poll_in,
	.poll_out = uart_glacial_poll_out,
	.err_check = NULL,
};

DEVICE_AND_API_INIT(uart_glacial_0, "uart0",
		    uart_glacial_init, 0xF0010000,
		    NULL,
		    PRE_KERNEL_1, CONFIG_KERNEL_INIT_PRIORITY_DEVICE,
		    (void *)&uart_glacial_driver_api);
