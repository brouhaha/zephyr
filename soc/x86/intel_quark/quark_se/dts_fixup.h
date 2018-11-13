/* SoC level DTS fixup file */

#define DT_UART_QMSI_0_BAUDRATE	DT_INTEL_QMSI_UART_B0002000_CURRENT_SPEED
#define DT_UART_QMSI_0_NAME		DT_INTEL_QMSI_UART_B0002000_LABEL
#define DT_UART_QMSI_0_IRQ		DT_INTEL_QMSI_UART_B0002000_IRQ_0
#define CONFIG_UART_QMSI_0_IRQ_PRI	DT_INTEL_QMSI_UART_B0002000_IRQ_0_PRIORITY
#define DT_UART_QMSI_0_IRQ_FLAGS	DT_INTEL_QMSI_UART_B0002000_IRQ_0_SENSE

#define DT_UART_QMSI_1_BAUDRATE	DT_INTEL_QMSI_UART_B0002400_CURRENT_SPEED
#define DT_UART_QMSI_1_NAME		DT_INTEL_QMSI_UART_B0002400_LABEL
#define DT_UART_QMSI_1_IRQ		DT_INTEL_QMSI_UART_B0002400_IRQ_0
#define CONFIG_UART_QMSI_1_IRQ_PRI	DT_INTEL_QMSI_UART_B0002400_IRQ_0_PRIORITY
#define DT_UART_QMSI_1_IRQ_FLAGS	DT_INTEL_QMSI_UART_B0002400_IRQ_0_SENSE

#define DT_PHYS_RAM_ADDR		CONFIG_SRAM_BASE_ADDRESS

#define DT_PHYS_LOAD_ADDR		CONFIG_FLASH_BASE_ADDRESS

#define DT_RAM_SIZE			CONFIG_SRAM_SIZE

#define DT_ROM_SIZE			CONFIG_FLASH_SIZE

#define DT_IOAPIC_BASE_ADDRESS	DT_INTEL_IOAPIC_FEC00000_BASE_ADDRESS

#define CONFIG_I2C_0_NAME		DT_INTEL_QMSI_I2C_B0002800_LABEL
#define DT_I2C_0_BITRATE		DT_INTEL_QMSI_I2C_B0002800_CLOCK_FREQUENCY
#define DT_I2C_0_IRQ		DT_INTEL_QMSI_I2C_B0002800_IRQ_0
#define CONFIG_I2C_0_IRQ_PRI		DT_INTEL_QMSI_I2C_B0002800_IRQ_0_PRIORITY
#define DT_I2C_0_IRQ_FLAGS		DT_INTEL_QMSI_I2C_B0002800_IRQ_0_SENSE
#define CONFIG_I2C_1_NAME		DT_INTEL_QMSI_I2C_B0002C00_LABEL
#define DT_I2C_1_BITRATE		DT_INTEL_QMSI_I2C_B0002C00_CLOCK_FREQUENCY
#define DT_I2C_1_IRQ		DT_INTEL_QMSI_I2C_B0002C00_IRQ_0
#define CONFIG_I2C_1_IRQ_PRI		DT_INTEL_QMSI_I2C_B0002C00_IRQ_0_PRIORITY
#define DT_I2C_1_IRQ_FLAGS		DT_INTEL_QMSI_I2C_B0002C00_IRQ_0_SENSE

#define DT_GPIO_QMSI_0_NAME		DT_INTEL_QMSI_GPIO_B0000C00_LABEL
#define DT_GPIO_QMSI_0_IRQ		DT_INTEL_QMSI_GPIO_B0000C00_IRQ_0
#define CONFIG_GPIO_QMSI_0_IRQ_PRI	DT_INTEL_QMSI_GPIO_B0000C00_IRQ_0_PRIORITY
#define DT_GPIO_QMSI_0_IRQ_FLAGS	DT_INTEL_QMSI_GPIO_B0000C00_IRQ_0_SENSE
#define DT_GPIO_QMSI_1_NAME		DT_INTEL_QMSI_GPIO_B0800B00_LABEL
#define DT_GPIO_QMSI_1_IRQ		DT_INTEL_QMSI_GPIO_B0800B00_IRQ_0
#define DT_GPIO_QMSI_1_IRQ_PRI	DT_INTEL_QMSI_GPIO_B0800B00_IRQ_0_PRIORITY
#define DT_GPIO_QMSI_1_IRQ_FLAGS	DT_INTEL_QMSI_GPIO_B0800B00_IRQ_0_SENSE

#define CONFIG_RTC_0_NAME		DT_INTEL_QMSI_RTC_B0000400_LABEL
#define DT_RTC_0_IRQ		DT_INTEL_QMSI_RTC_B0000400_IRQ_0
#define CONFIG_RTC_0_IRQ_PRI		DT_INTEL_QMSI_RTC_B0000400_IRQ_0_PRIORITY
#define DT_RTC_0_IRQ_FLAGS		DT_INTEL_QMSI_RTC_B0000400_IRQ_0_SENSE

#define DT_SPI_0_BASE_ADDRESS	DT_SNPS_DESIGNWARE_SPI_B0001000_BASE_ADDRESS
#define CONFIG_SPI_0_NAME		DT_SNPS_DESIGNWARE_SPI_B0001000_LABEL
#define DT_SPI_0_IRQ		DT_SNPS_DESIGNWARE_SPI_B0001000_IRQ_0
#define CONFIG_SPI_0_IRQ_PRI		DT_SNPS_DESIGNWARE_SPI_B0001000_IRQ_0_PRIORITY

#define DT_SPI_1_BASE_ADDRESS	DT_SNPS_DESIGNWARE_SPI_B0001400_BASE_ADDRESS
#define CONFIG_SPI_1_NAME		DT_SNPS_DESIGNWARE_SPI_B0001400_LABEL
#define DT_SPI_1_IRQ		DT_SNPS_DESIGNWARE_SPI_B0001400_IRQ_0
#define CONFIG_SPI_1_IRQ_PRI		DT_SNPS_DESIGNWARE_SPI_B0001400_IRQ_0_PRIORITY

#define DT_SPI_2_BASE_ADDRESS	DT_SNPS_DESIGNWARE_SPI_B0001800_BASE_ADDRESS
#define CONFIG_SPI_2_NAME		DT_SNPS_DESIGNWARE_SPI_B0001800_LABEL
#define DT_SPI_2_IRQ		DT_SNPS_DESIGNWARE_SPI_B0001800_IRQ_0
#define CONFIG_SPI_2_IRQ_PRI		DT_SNPS_DESIGNWARE_SPI_B0001800_IRQ_0_PRIORITY

#define CONFIG_WDT_0_NAME		DT_INTEL_QMSI_WATCHDOG_B0000000_LABEL
#define DT_WDT_0_IRQ		DT_INTEL_QMSI_WATCHDOG_B0000000_IRQ_0
#define DT_WDT_0_IRQ_PRI		DT_INTEL_QMSI_WATCHDOG_B0000000_IRQ_0_PRIORITY
#define DT_WDT_0_IRQ_FLAGS		DT_INTEL_QMSI_WATCHDOG_B0000000_IRQ_0_SENSE

/* End of SoC Level DTS fixup file */
