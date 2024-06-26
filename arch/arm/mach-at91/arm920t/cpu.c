// SPDX-License-Identifier: GPL-2.0+
/*
 * [origin: arch/arm/cpu/arm926ejs/at91/cpu.c]
 *
 * (C) Copyright 2011
 * Andreas Bießmann, andreas@biessmann.org
 * (C) Copyright 2010
 * Reinhard Meyer, reinhard.meyer@emk-elektronik.de
 * (C) Copyright 2009
 * Jean-Christophe PLAGNIOL-VILLARD <plagnioj@jcrosoft.com>
 */

#include <config.h>
#include <init.h>
#include <asm/io.h>
#include <asm/arch/hardware.h>
#include <asm/arch/clk.h>

#ifndef CFG_SYS_AT91_MAIN_CLOCK
#define CFG_SYS_AT91_MAIN_CLOCK 0
#endif

int arch_cpu_init(void)
{
	return at91_clock_init(CFG_SYS_AT91_MAIN_CLOCK);
}
