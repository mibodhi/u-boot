// SPDX-License-Identifier: GPL-2.0+
/*
 * Copyright 2008-2012 Freescale Semiconductor, Inc.
 *
 * (C) Copyright 2000
 * Wolfgang Denk, DENX Software Engineering, wd@denx.de.
 */

#include <config.h>
#include <asm/fsl_law.h>
#include <asm/mmu.h>

struct law_entry law_table[] = {
	SET_LAW(CFG_SYS_FLASH_BASE_PHYS, LAW_SIZE_256M, LAW_TRGT_IF_IFC),
#ifdef CFG_SYS_BMAN_MEM_PHYS
	SET_LAW(CFG_SYS_BMAN_MEM_PHYS, LAW_SIZE_32M, LAW_TRGT_IF_BMAN),
#endif
#ifdef CFG_SYS_QMAN_MEM_PHYS
	SET_LAW(CFG_SYS_QMAN_MEM_PHYS, LAW_SIZE_32M, LAW_TRGT_IF_QMAN),
#endif
#ifdef QIXIS_BASE_PHYS
	SET_LAW(QIXIS_BASE_PHYS, LAW_SIZE_4K, LAW_TRGT_IF_IFC),
#endif
#ifdef CFG_SYS_DCSRBAR_PHYS
	/* Limit DCSR to 32M to access NPC Trace Buffer */
	SET_LAW(CFG_SYS_DCSRBAR_PHYS, LAW_SIZE_32M, LAW_TRGT_IF_DCSR),
#endif
#ifdef CFG_SYS_NAND_BASE_PHYS
	SET_LAW(CFG_SYS_NAND_BASE_PHYS, LAW_SIZE_1M, LAW_TRGT_IF_IFC),
#endif
};

int num_law_entries = ARRAY_SIZE(law_table);
