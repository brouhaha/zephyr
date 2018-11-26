/*
 * Copyright (c) 2016 Jean-Paul Etienne <fractalclone@gmail.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file SoC configuration macros for the riscv-qemu
 */

#ifndef __RISCV32_GLACIAL_H_
#define __RISCV32_GLACIAL_H_

#include <soc_common.h>

/* Timer configuration */
#define RISCV_MTIME_BASE             0x00000010
#define RISCV_MTIMECMP_BASE          0x00000018

/* lib-c hooks required RAM defined variables */
#define RISCV_RAM_BASE               CONFIG_RISCV_RAM_BASE_ADDR
#define RISCV_RAM_SIZE               CONFIG_RISCV_RAM_SIZE

#endif /* __RISCV32_GLACIAL_H_ */
