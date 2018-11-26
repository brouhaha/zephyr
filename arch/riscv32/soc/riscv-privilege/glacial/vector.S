/*
 * Copyright (c) 2016 Jean-Paul Etienne <fractalclone@gmail.com>
 * Contributors: 2018 Antmicro <www.antmicro.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <toolchain.h>

/* exports */
GTEXT(__start)

/* imports */
GTEXT(__reset)
GTEXT(__irq_wrapper)

/*
 * following Glacial specs
 * 0x00000000: reset
 * 0x00000010: mtime
 * 0x00000018: mtimecmp
 *
 * Call __irq_wrapper to handle all interrupts/exceptions/faults
 */
SECTION_FUNC(vectors, __start)
	.option norvc;

	.org 0x00
	/* Call __reset for reset vector */
	jal x0, do_reset

	.org 0x20
do_reset:
	/*
	 * Set mtvec (Machine Trap-Vector Base-Address Register)
	 * to __irq_wrapper.
	 */
	la t0, __irq_wrapper
	csrw mtvec, t0

	/* Jump to __reset */
	tail __reset
