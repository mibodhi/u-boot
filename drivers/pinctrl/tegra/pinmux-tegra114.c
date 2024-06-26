// SPDX-License-Identifier: GPL-2.0+
/*
 * Copyright (c) 2010-2014, NVIDIA CORPORATION. All rights reserved.
 */

#include <asm/io.h>
#include <asm/arch/pinmux.h>

#define PIN(pin, f0, f1, f2, f3)	\
	{				\
		.funcs = {		\
			PMUX_FUNC_##f0,	\
			PMUX_FUNC_##f1,	\
			PMUX_FUNC_##f2,	\
			PMUX_FUNC_##f3,	\
		},			\
	}

#define PIN_RESERVED {}

static const struct pmux_pingrp_desc tegra114_pingroups[] = {
	/*  pin,                    f0,         f1,       f2,           f3 */
	/* Offset 0x3000 */
	PIN(ULPI_DATA0_PO1,         SPI3,       HSI,      UARTA,        ULPI),
	PIN(ULPI_DATA1_PO2,         SPI3,       HSI,      UARTA,        ULPI),
	PIN(ULPI_DATA2_PO3,         SPI3,       HSI,      UARTA,        ULPI),
	PIN(ULPI_DATA3_PO4,         SPI3,       HSI,      UARTA,        ULPI),
	PIN(ULPI_DATA4_PO5,         SPI2,       HSI,      UARTA,        ULPI),
	PIN(ULPI_DATA5_PO6,         SPI2,       HSI,      UARTA,        ULPI),
	PIN(ULPI_DATA6_PO7,         SPI2,       HSI,      UARTA,        ULPI),
	PIN(ULPI_DATA7_PO0,         SPI2,       HSI,      UARTA,        ULPI),
	PIN(ULPI_CLK_PY0,           SPI1,       SPI5,     UARTD,        ULPI),
	PIN(ULPI_DIR_PY1,           SPI1,       SPI5,     UARTD,        ULPI),
	PIN(ULPI_NXT_PY2,           SPI1,       SPI5,     UARTD,        ULPI),
	PIN(ULPI_STP_PY3,           SPI1,       SPI5,     UARTD,        ULPI),
	PIN(DAP3_FS_PP0,            I2S2,       SPI5,     DISPLAYA,     DISPLAYB),
	PIN(DAP3_DIN_PP1,           I2S2,       SPI5,     DISPLAYA,     DISPLAYB),
	PIN(DAP3_DOUT_PP2,          I2S2,       SPI5,     DISPLAYA,     DISPLAYB),
	PIN(DAP3_SCLK_PP3,          I2S2,       SPI5,     DISPLAYA,     DISPLAYB),
	PIN(PV0,                    USB,        RSVD2,    RSVD3,        RSVD4),
	PIN(PV1,                    RSVD1,      RSVD2,    RSVD3,        RSVD4),
	PIN(SDMMC1_CLK_PZ0,         SDMMC1,     CLK12,    RSVD3,        RSVD4),
	PIN(SDMMC1_CMD_PZ1,         SDMMC1,     SPDIF,    SPI4,         UARTA),
	PIN(SDMMC1_DAT3_PY4,        SDMMC1,     SPDIF,    SPI4,         UARTA),
	PIN(SDMMC1_DAT2_PY5,        SDMMC1,     PWM0,     SPI4,         UARTA),
	PIN(SDMMC1_DAT1_PY6,        SDMMC1,     PWM1,     SPI4,         UARTA),
	PIN(SDMMC1_DAT0_PY7,        SDMMC1,     RSVD2,    SPI4,         UARTA),
	PIN_RESERVED,
	PIN_RESERVED,
	/* Offset 0x3068 */
	PIN(CLK2_OUT_PW5,           EXTPERIPH2, RSVD2,    RSVD3,        RSVD4),
	PIN(CLK2_REQ_PCC5,          DAP,        RSVD2,    RSVD3,        RSVD4),
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	/* Offset 0x3110 */
	PIN(HDMI_INT_PN7,           RSVD1,      RSVD2,    RSVD3,        RSVD4),
	PIN(DDC_SCL_PV4,            I2C4,       RSVD2,    RSVD3,        RSVD4),
	PIN(DDC_SDA_PV5,            I2C4,       RSVD2,    RSVD3,        RSVD4),
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	/* Offset 0x3164 */
	PIN(UART2_RXD_PC3,          IRDA,       SPDIF,    UARTA,        SPI4),
	PIN(UART2_TXD_PC2,          IRDA,       SPDIF,    UARTA,        SPI4),
	PIN(UART2_RTS_N_PJ6,        UARTA,      UARTB,    RSVD3,        SPI4),
	PIN(UART2_CTS_N_PJ5,        UARTA,      UARTB,    RSVD3,        SPI4),
	PIN(UART3_TXD_PW6,          UARTC,      RSVD2,    RSVD3,        SPI4),
	PIN(UART3_RXD_PW7,          UARTC,      RSVD2,    RSVD3,        SPI4),
	PIN(UART3_CTS_N_PA1,        UARTC,      SDMMC1,   DTV,          SPI4),
	PIN(UART3_RTS_N_PC0,        UARTC,      PWM0,     DTV,          DISPLAYA),
	PIN(PU0,                    OWR,        UARTA,    RSVD3,        RSVD4),
	PIN(PU1,                    RSVD1,      UARTA,    RSVD3,        RSVD4),
	PIN(PU2,                    RSVD1,      UARTA,    RSVD3,        RSVD4),
	PIN(PU3,                    PWM0,       UARTA,    DISPLAYA,     DISPLAYB),
	PIN(PU4,                    PWM1,       UARTA,    DISPLAYA,     DISPLAYB),
	PIN(PU5,                    PWM2,       UARTA,    DISPLAYA,     DISPLAYB),
	PIN(PU6,                    PWM3,       UARTA,    USB,          DISPLAYB),
	PIN(GEN1_I2C_SDA_PC5,       I2C1,       RSVD2,    RSVD3,        RSVD4),
	PIN(GEN1_I2C_SCL_PC4,       I2C1,       RSVD2,    RSVD3,        RSVD4),
	PIN(DAP4_FS_PP4,            I2S3,       RSVD2,    DTV,          RSVD4),
	PIN(DAP4_DIN_PP5,           I2S3,       RSVD2,    RSVD3,        RSVD4),
	PIN(DAP4_DOUT_PP6,          I2S3,       RSVD2,    DTV,          RSVD4),
	PIN(DAP4_SCLK_PP7,          I2S3,       RSVD2,    RSVD3,        RSVD4),
	PIN(CLK3_OUT_PEE0,          EXTPERIPH3, RSVD2,    RSVD3,        RSVD4),
	PIN(CLK3_REQ_PEE1,          DEV3,       RSVD2,    RSVD3,        RSVD4),
	PIN(GMI_WP_N_PC7,           RSVD1,      NAND,     GMI,          GMI_ALT),
	PIN(GMI_IORDY_PI5,          SDMMC2,     RSVD2,    GMI,          TRACE),
	PIN(GMI_WAIT_PI7,           SPI4,       NAND,     GMI,          DTV),
	PIN(GMI_ADV_N_PK0,          RSVD1,      NAND,     GMI,          TRACE),
	PIN(GMI_CLK_PK1,            SDMMC2,     NAND,     GMI,          TRACE),
	PIN(GMI_CS0_N_PJ0,          RSVD1,      NAND,     GMI,          USB),
	PIN(GMI_CS1_N_PJ2,          RSVD1,      NAND,     GMI,          SOC),
	PIN(GMI_CS2_N_PK3,          SDMMC2,     NAND,     GMI,          TRACE),
	PIN(GMI_CS3_N_PK4,          SDMMC2,     NAND,     GMI,          GMI_ALT),
	PIN(GMI_CS4_N_PK2,          USB,        NAND,     GMI,          TRACE),
	PIN(GMI_CS6_N_PI3,          NAND,       NAND_ALT, GMI,          SPI4),
	PIN(GMI_CS7_N_PI6,          NAND,       NAND_ALT, GMI,          SDMMC2),
	PIN(GMI_AD0_PG0,            RSVD1,      NAND,     GMI,          RSVD4),
	PIN(GMI_AD1_PG1,            RSVD1,      NAND,     GMI,          RSVD4),
	PIN(GMI_AD2_PG2,            RSVD1,      NAND,     GMI,          RSVD4),
	PIN(GMI_AD3_PG3,            RSVD1,      NAND,     GMI,          RSVD4),
	PIN(GMI_AD4_PG4,            RSVD1,      NAND,     GMI,          RSVD4),
	PIN(GMI_AD5_PG5,            RSVD1,      NAND,     GMI,          SPI4),
	PIN(GMI_AD6_PG6,            RSVD1,      NAND,     GMI,          SPI4),
	PIN(GMI_AD7_PG7,            RSVD1,      NAND,     GMI,          SPI4),
	PIN(GMI_AD8_PH0,            PWM0,       NAND,     GMI,          DTV),
	PIN(GMI_AD9_PH1,            PWM1,       NAND,     GMI,          CLDVFS),
	PIN(GMI_AD10_PH2,           PWM2,       NAND,     GMI,          CLDVFS),
	PIN(GMI_AD11_PH3,           PWM3,       NAND,     GMI,          USB),
	PIN(GMI_AD12_PH4,           SDMMC2,     NAND,     GMI,          RSVD4),
	PIN(GMI_AD13_PH5,           SDMMC2,     NAND,     GMI,          RSVD4),
	PIN(GMI_AD14_PH6,           SDMMC2,     NAND,     GMI,          DTV),
	PIN(GMI_AD15_PH7,           SDMMC2,     NAND,     GMI,          DTV),
	PIN(GMI_A16_PJ7,            UARTD,      TRACE,    GMI,          GMI_ALT),
	PIN(GMI_A17_PB0,            UARTD,      RSVD2,    GMI,          TRACE),
	PIN(GMI_A18_PB1,            UARTD,      RSVD2,    GMI,          TRACE),
	PIN(GMI_A19_PK7,            UARTD,      SPI4,     GMI,          TRACE),
	PIN(GMI_WR_N_PI0,           RSVD1,      NAND,     GMI,          SPI4),
	PIN(GMI_OE_N_PI1,           RSVD1,      NAND,     GMI,          SOC),
	PIN(GMI_DQS_P_PJ3,          SDMMC2,     NAND,     GMI,          TRACE),
	PIN(GMI_RST_N_PI4,          NAND,       NAND_ALT, GMI,          RSVD4),
	PIN(GEN2_I2C_SCL_PT5,       I2C2,       RSVD2,    GMI,          RSVD4),
	PIN(GEN2_I2C_SDA_PT6,       I2C2,       RSVD2,    GMI,          RSVD4),
	PIN(SDMMC4_CLK_PCC4,        SDMMC4,     RSVD2,    GMI,          RSVD4),
	PIN(SDMMC4_CMD_PT7,         SDMMC4,     RSVD2,    GMI,          RSVD4),
	PIN(SDMMC4_DAT0_PAA0,       SDMMC4,     SPI3,     GMI,          RSVD4),
	PIN(SDMMC4_DAT1_PAA1,       SDMMC4,     SPI3,     GMI,          RSVD4),
	PIN(SDMMC4_DAT2_PAA2,       SDMMC4,     SPI3,     GMI,          RSVD4),
	PIN(SDMMC4_DAT3_PAA3,       SDMMC4,     SPI3,     GMI,          RSVD4),
	PIN(SDMMC4_DAT4_PAA4,       SDMMC4,     SPI3,     GMI,          RSVD4),
	PIN(SDMMC4_DAT5_PAA5,       SDMMC4,     SPI3,     GMI,          RSVD4),
	PIN(SDMMC4_DAT6_PAA6,       SDMMC4,     SPI3,     GMI,          RSVD4),
	PIN(SDMMC4_DAT7_PAA7,       SDMMC4,     RSVD2,    GMI,          RSVD4),
	PIN_RESERVED,
	/* Offset 0x3284 */
	PIN(CAM_MCLK_PCC0,          VI,         VI_ALT1,  VI_ALT3,      RSVD4),
	PIN(PCC1,                   I2S4,       RSVD2,    RSVD3,        RSVD4),
	PIN(PBB0,                   I2S4,       VI,       VI_ALT1,      VI_ALT3),
	PIN(CAM_I2C_SCL_PBB1,       VGP1,       I2C3,     RSVD3,        RSVD4),
	PIN(CAM_I2C_SDA_PBB2,       VGP2,       I2C3,     RSVD3,        RSVD4),
	PIN(PBB3,                   VGP3,       DISPLAYA, DISPLAYB,     RSVD4),
	PIN(PBB4,                   VGP4,       DISPLAYA, DISPLAYB,     RSVD4),
	PIN(PBB5,                   VGP5,       DISPLAYA, DISPLAYB,     RSVD4),
	PIN(PBB6,                   VGP6,       DISPLAYA, DISPLAYB,     RSVD4),
	PIN(PBB7,                   I2S4,       RSVD2,    RSVD3,        RSVD4),
	PIN(PCC2,                   I2S4,       RSVD2,    RSVD3,        RSVD4),
	PIN(JTAG_RTCK,              RTCK,       RSVD2,    RSVD3,        RSVD4),
	PIN(PWR_I2C_SCL_PZ6,        I2CPWR,     RSVD2,    RSVD3,        RSVD4),
	PIN(PWR_I2C_SDA_PZ7,        I2CPWR,     RSVD2,    RSVD3,        RSVD4),
	PIN(KB_ROW0_PR0,            KBC,        RSVD2,    RSVD3,        RSVD4),
	PIN(KB_ROW1_PR1,            KBC,        RSVD2,    RSVD3,        RSVD4),
	PIN(KB_ROW2_PR2,            KBC,        RSVD2,    RSVD3,        RSVD4),
	PIN(KB_ROW3_PR3,            KBC,        DISPLAYA, RSVD3,        DISPLAYB),
	PIN(KB_ROW4_PR4,            KBC,        DISPLAYA, SPI2,         DISPLAYB),
	PIN(KB_ROW5_PR5,            KBC,        DISPLAYA, SPI2,         DISPLAYB),
	PIN(KB_ROW6_PR6,            KBC,        DISPLAYA, DISPLAYA_ALT, DISPLAYB),
	PIN(KB_ROW7_PR7,            KBC,        RSVD2,    CLDVFS,       UARTA),
	PIN(KB_ROW8_PS0,            KBC,        RSVD2,    CLDVFS,       UARTA),
	PIN(KB_ROW9_PS1,            KBC,        RSVD2,    RSVD3,        UARTA),
	PIN(KB_ROW10_PS2,           KBC,        RSVD2,    RSVD3,        UARTA),
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	/* Offset 0x32fc */
	PIN(KB_COL0_PQ0,            KBC,        USB,      SPI2,         EMC_DLL),
	PIN(KB_COL1_PQ1,            KBC,        RSVD2,    SPI2,         EMC_DLL),
	PIN(KB_COL2_PQ2,            KBC,        RSVD2,    SPI2,         RSVD4),
	PIN(KB_COL3_PQ3,            KBC,        DISPLAYA, PWM2,         UARTA),
	PIN(KB_COL4_PQ4,            KBC,        OWR,      SDMMC3,       UARTA),
	PIN(KB_COL5_PQ5,            KBC,        RSVD2,    SDMMC1,       RSVD4),
	PIN(KB_COL6_PQ6,            KBC,        RSVD2,    SPI2,         RSVD4),
	PIN(KB_COL7_PQ7,            KBC,        RSVD2,    SPI2,         RSVD4),
	PIN(CLK_32K_OUT_PA0,        BLINK,      SOC,      RSVD3,        RSVD4),
	PIN(SYS_CLK_REQ_PZ5,        SYSCLK,     RSVD2,    RSVD3,        RSVD4),
	PIN(CORE_PWR_REQ,           PWRON,      RSVD2,    RSVD3,        RSVD4),
	PIN(CPU_PWR_REQ,            CPU,        RSVD2,    RSVD3,        RSVD4),
	PIN(PWR_INT_N,              PMI,        RSVD2,    RSVD3,        RSVD4),
	PIN(CLK_32K_IN,             CLK,        RSVD2,    RSVD3,        RSVD4),
	PIN(OWR,                    OWR,        RSVD2,    RSVD3,        RSVD4),
	PIN(DAP1_FS_PN0,            I2S0,       HDA,      GMI,          RSVD4),
	PIN(DAP1_DIN_PN1,           I2S0,       HDA,      GMI,          RSVD4),
	PIN(DAP1_DOUT_PN2,          I2S0,       HDA,      GMI,          RSVD4),
	PIN(DAP1_SCLK_PN3,          I2S0,       HDA,      GMI,          RSVD4),
	PIN(CLK1_REQ_PEE2,          DAP,        DAP1,     RSVD3,        RSVD4),
	PIN(CLK1_OUT_PW4,           EXTPERIPH1, DAP2,     RSVD3,        RSVD4),
	PIN(SPDIF_IN_PK6,           SPDIF,      USB,      RSVD3,        RSVD4),
	PIN(SPDIF_OUT_PK5,          SPDIF,      RSVD2,    RSVD3,        RSVD4),
	PIN(DAP2_FS_PA2,            I2S1,       HDA,      RSVD3,        RSVD4),
	PIN(DAP2_DIN_PA4,           I2S1,       HDA,      RSVD3,        RSVD4),
	PIN(DAP2_DOUT_PA5,          I2S1,       HDA,      RSVD3,        RSVD4),
	PIN(DAP2_SCLK_PA3,          I2S1,       HDA,      RSVD3,        RSVD4),
	PIN(DVFS_PWM_PX0,           SPI6,       CLDVFS,   RSVD3,        RSVD4),
	PIN(GPIO_X1_AUD_PX1,        SPI6,       RSVD2,    RSVD3,        RSVD4),
	PIN(GPIO_X3_AUD_PX3,        SPI6,       SPI1,     RSVD3,        RSVD4),
	PIN(DVFS_CLK_PX2,           SPI6,       CLDVFS,   RSVD3,        RSVD4),
	PIN(GPIO_X4_AUD_PX4,        RSVD1,      SPI1,     SPI2,         DAP2),
	PIN(GPIO_X5_AUD_PX5,        RSVD1,      SPI1,     SPI2,         RSVD4),
	PIN(GPIO_X6_AUD_PX6,        SPI6,       SPI1,     SPI2,         RSVD4),
	PIN(GPIO_X7_AUD_PX7,        RSVD1,      SPI1,     SPI2,         RSVD4),
	PIN_RESERVED,
	PIN_RESERVED,
	/* Offset 0x3390 */
	PIN(SDMMC3_CLK_PA6,         SDMMC3,     RSVD2,    RSVD3,        SPI3),
	PIN(SDMMC3_CMD_PA7,         SDMMC3,     PWM3,     UARTA,        SPI3),
	PIN(SDMMC3_DAT0_PB7,        SDMMC3,     RSVD2,    RSVD3,        SPI3),
	PIN(SDMMC3_DAT1_PB6,        SDMMC3,     PWM2,     UARTA,        SPI3),
	PIN(SDMMC3_DAT2_PB5,        SDMMC3,     PWM1,     DISPLAYA,     SPI3),
	PIN(SDMMC3_DAT3_PB4,        SDMMC3,     PWM0,     DISPLAYB,     SPI3),
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	PIN_RESERVED,
	/* Offset 0x33e0 */
	PIN(HDMI_CEC_PEE3,          CEC,        SDMMC3,   RSVD3,        SOC),
	PIN(SDMMC1_WP_N_PV3,        SDMMC1,     CLK12,    SPI4,         UARTA),
	PIN(SDMMC3_CD_N_PV2,        SDMMC3,     OWR,      RSVD3,        RSVD4),
	PIN(GPIO_W2_AUD_PW2,        SPI6,       RSVD2,    SPI2,         I2C1),
	PIN(GPIO_W3_AUD_PW3,        SPI6,       SPI1,     SPI2,         I2C1),
	PIN(USB_VBUS_EN0_PN4,       USB,        RSVD2,    RSVD3,        RSVD4),
	PIN(USB_VBUS_EN1_PN5,       USB,        RSVD2,    RSVD3,        RSVD4),
	PIN(SDMMC3_CLK_LB_IN_PEE5,  SDMMC3,     RSVD2,    RSVD3,        RSVD4),
	PIN(SDMMC3_CLK_LB_OUT_PEE4, SDMMC3,     RSVD2,    RSVD3,        RSVD4),
	PIN(GMI_CLK_LB,             SDMMC2,     NAND,     GMI,          RSVD4),
	PIN(RESET_OUT_N,            RSVD1,      RSVD2,    RSVD3,        RESET_OUT_N),
};
const struct pmux_pingrp_desc *tegra_soc_pingroups = tegra114_pingroups;
