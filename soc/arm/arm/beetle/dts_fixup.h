/* SoC level DTS fixup file */

#define DT_NUM_IRQ_PRIO_BITS	DT_ARM_V7M_NVIC_E000E100_ARM_NUM_IRQ_PRIORITY_BITS

/* CMSDK APB Timers */
#define DT_CMSDK_APB_TIMER0			DT_ARM_CMSDK_TIMER_40000000_BASE_ADDRESS
#define DT_CMSDK_APB_TIMER_0_IRQ			DT_ARM_CMSDK_TIMER_40000000_IRQ_0

#define DT_CMSDK_APB_TIMER1			DT_ARM_CMSDK_TIMER_40001000_BASE_ADDRESS
#define DT_CMSDK_APB_TIMER_1_IRQ IRQ_TIMER1	DT_ARM_CMSDK_TIMER_40001000_IRQ_0

/* CMSDK APB Dual Timer */
#define DT_CMSDK_APB_DTIMER			DT_ARM_CMSDK_DTIMER_40002000_BASE_ADDRESS
#define DT_CMSDK_APB_DUALTIMER_IRQ			DT_ARM_CMSDK_DTIMER_40002000_IRQ_0

/* CMSDK APB Universal Asynchronous Receiver-Transmitter (UART) */
#define DT_CMSDK_APB_UART0				DT_ARM_CMSDK_UART_40004000_BASE_ADDRESS
#define DT_CMSDK_APB_UART_0_IRQ			DT_ARM_CMSDK_UART_40004000_IRQ_0
#define DT_UART_CMSDK_APB_PORT0_IRQ_PRI	DT_ARM_CMSDK_UART_40004000_IRQ_0_PRIORITY
#define DT_UART_CMSDK_APB_PORT0_BAUD_RATE	DT_ARM_CMSDK_UART_40004000_CURRENT_SPEED
#define DT_UART_CMSDK_APB_PORT0_NAME	DT_ARM_CMSDK_UART_40004000_LABEL

#define DT_CMSDK_APB_UART1				DT_ARM_CMSDK_UART_40005000_BASE_ADDRESS
#define DT_CMSDK_APB_UART_1_IRQ			DT_ARM_CMSDK_UART_40005000_IRQ_0
#define DT_UART_CMSDK_APB_PORT1_IRQ_PRI	DT_ARM_CMSDK_UART_40005000_IRQ_0_PRIORITY
#define DT_UART_CMSDK_APB_PORT1_BAUD_RATE	DT_ARM_CMSDK_UART_40005000_CURRENT_SPEED
#define DT_UART_CMSDK_APB_PORT1_NAME	DT_ARM_CMSDK_UART_40005000_LABEL

/* CMSDK APB Watchdog */
#define DT_CMSDK_APB_WDOG				DT_ARM_CMSDK_WATCHDOG_40008000_BASE_ADDRESS

/* CMSDK AHB General Purpose Input/Output (GPIO) */
#define DT_CMSDK_AHB_GPIO0				DT_ARM_CMSDK_GPIO_40010000_BASE_ADDRESS
#define DT_IRQ_PORT0_ALL				DT_ARM_CMSDK_GPIO_40010000_IRQ_0

#define DT_CMSDK_AHB_GPIO1				DT_ARM_CMSDK_GPIO_40011000_BASE_ADDRESS
#define DT_IRQ_PORT1_ALL				DT_ARM_CMSDK_GPIO_40011000_IRQ_0

#define DT_CMSDK_AHB_GPIO2				DT_ARM_CMSDK_GPIO_40012000_BASE_ADDRESS
#define DT_IRQ_PORT2_ALL				DT_ARM_CMSDK_GPIO_40012000_IRQ_0

#define DT_CMSDK_AHB_GPIO3				DT_ARM_CMSDK_GPIO_40013000_BASE_ADDRESS
#define DT_IRQ_PORT3_ALL				DT_ARM_CMSDK_GPIO_40013000_IRQ_0

/* End of SoC Level DTS fixup file */
