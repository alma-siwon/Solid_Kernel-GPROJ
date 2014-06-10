/* Copyright (c) 2012-2013, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _A300_REG_H
#define _A300_REG_H

/* Interrupt bit positions within RBBM_INT_0 */

#define A3XX_INT_RBBM_GPU_IDLE 0
#define A3XX_INT_RBBM_AHB_ERROR 1
#define A3XX_INT_RBBM_REG_TIMEOUT 2
#define A3XX_INT_RBBM_ME_MS_TIMEOUT 3
#define A3XX_INT_RBBM_PFP_MS_TIMEOUT 4
#define A3XX_INT_RBBM_ATB_BUS_OVERFLOW 5
#define A3XX_INT_VFD_ERROR 6
#define A3XX_INT_CP_SW_INT 7
#define A3XX_INT_CP_T0_PACKET_IN_IB 8
#define A3XX_INT_CP_OPCODE_ERROR 9
#define A3XX_INT_CP_RESERVED_BIT_ERROR 10
#define A3XX_INT_CP_HW_FAULT 11
#define A3XX_INT_CP_DMA 12
#define A3XX_INT_CP_IB2_INT 13
#define A3XX_INT_CP_IB1_INT 14
#define A3XX_INT_CP_RB_INT 15
#define A3XX_INT_CP_REG_PROTECT_FAULT 16
#define A3XX_INT_CP_RB_DONE_TS 17
#define A3XX_INT_CP_VS_DONE_TS 18
#define A3XX_INT_CP_PS_DONE_TS 19
#define A3XX_INT_CACHE_FLUSH_TS 20
#define A3XX_INT_CP_AHB_ERROR_HALT 21
#define A3XX_INT_MISC_HANG_DETECT 24
#define A3XX_INT_UCHE_OOB_ACCESS 25

/* Register definitions */

#define A3XX_RBBM_HW_VERSION 0x000
#define A3XX_RBBM_HW_RELEASE 0x001
#define A3XX_RBBM_HW_CONFIGURATION 0x002
#define A3XX_RBBM_CLOCK_CTL 0x010
#define A3XX_RBBM_SP_HYST_CNT 0x012
#define A3XX_RBBM_SW_RESET_CMD 0x018
#define A3XX_RBBM_AHB_CTL0 0x020
#define A3XX_RBBM_AHB_CTL1 0x021
#define A3XX_RBBM_AHB_CMD 0x022
#define A3XX_RBBM_AHB_ERROR_STATUS 0x027
#define A3XX_RBBM_GPR0_CTL 0x02E
/* This the same register as on A2XX, just in a different place */
#define A3XX_RBBM_STATUS 0x030
#define A3XX_RBBM_WAIT_IDLE_CLOCKS_CTL 0x33
#define A3XX_RBBM_INTERFACE_HANG_INT_CTL 0x50
#define A3XX_RBBM_INTERFACE_HANG_MASK_CTL0 0x51
#define A3XX_RBBM_INTERFACE_HANG_MASK_CTL1 0x54
#define A3XX_RBBM_INTERFACE_HANG_MASK_CTL2 0x57
#define A3XX_RBBM_INTERFACE_HANG_MASK_CTL3 0x5A
#define A3XX_RBBM_INT_CLEAR_CMD 0x061
#define A3XX_RBBM_INT_0_MASK 0x063
#define A3XX_RBBM_INT_0_STATUS 0x064
#define A3XX_RBBM_PERFCTR_CTL 0x80
#define A3XX_RBBM_PERFCTR_LOAD_CMD0 0x81
#define A3XX_RBBM_PERFCTR_LOAD_CMD1 0x82
#define A3XX_RBBM_PERFCTR_LOAD_VALUE_LO 0x84
#define A3XX_RBBM_PERFCTR_LOAD_VALUE_HI 0x85
#define A3XX_RBBM_PERFCOUNTER0_SELECT 0x86
#define A3XX_RBBM_PERFCOUNTER1_SELECT 0x87
#define A3XX_RBBM_GPU_BUSY_MASKED 0x88
#define A3XX_RBBM_PERFCTR_CP_0_LO 0x90
#define A3XX_RBBM_PERFCTR_CP_0_HI 0x91
#define A3XX_RBBM_PERFCTR_RBBM_0_LO 0x92
#define A3XX_RBBM_PERFCTR_RBBM_0_HI 0x93
#define A3XX_RBBM_PERFCTR_RBBM_1_LO 0x94
#define A3XX_RBBM_PERFCTR_RBBM_1_HI 0x95
#define A3XX_RBBM_PERFCTR_PC_0_LO 0x96
#define A3XX_RBBM_PERFCTR_PC_0_HI 0x97
#define A3XX_RBBM_PERFCTR_PC_1_LO 0x98
#define A3XX_RBBM_PERFCTR_PC_1_HI 0x99
#define A3XX_RBBM_PERFCTR_PC_2_LO 0x9A
#define A3XX_RBBM_PERFCTR_PC_2_HI 0x9B
#define A3XX_RBBM_PERFCTR_PC_3_LO 0x9C
#define A3XX_RBBM_PERFCTR_PC_3_HI 0x9D
#define A3XX_RBBM_PERFCTR_VFD_0_LO 0x9E
#define A3XX_RBBM_PERFCTR_VFD_0_HI 0x9F
#define A3XX_RBBM_PERFCTR_VFD_1_LO 0xA0
#define A3XX_RBBM_PERFCTR_VFD_1_HI 0xA1
#define A3XX_RBBM_PERFCTR_HLSQ_0_LO 0xA2
#define A3XX_RBBM_PERFCTR_HLSQ_0_HI 0xA3
#define A3XX_RBBM_PERFCTR_HLSQ_1_LO 0xA4
#define A3XX_RBBM_PERFCTR_HLSQ_1_HI 0xA5
#define A3XX_RBBM_PERFCTR_HLSQ_2_LO 0xA6
#define A3XX_RBBM_PERFCTR_HLSQ_2_HI 0xA7
#define A3XX_RBBM_PERFCTR_HLSQ_3_LO 0xA8
#define A3XX_RBBM_PERFCTR_HLSQ_3_HI 0xA9
#define A3XX_RBBM_PERFCTR_HLSQ_4_LO 0xAA
#define A3XX_RBBM_PERFCTR_HLSQ_4_HI 0xAB
#define A3XX_RBBM_PERFCTR_HLSQ_5_LO 0xAC
#define A3XX_RBBM_PERFCTR_HLSQ_5_HI 0xAD
#define A3XX_RBBM_PERFCTR_VPC_0_LO 0xAE
#define A3XX_RBBM_PERFCTR_VPC_0_HI 0xAF
#define A3XX_RBBM_PERFCTR_VPC_1_LO 0xB0
#define A3XX_RBBM_PERFCTR_VPC_1_HI 0xB1
#define A3XX_RBBM_PERFCTR_TSE_0_LO 0xB2
#define A3XX_RBBM_PERFCTR_TSE_0_HI 0xB3
#define A3XX_RBBM_PERFCTR_TSE_1_LO 0xB4
#define A3XX_RBBM_PERFCTR_TSE_1_HI 0xB5
#define A3XX_RBBM_PERFCTR_RAS_0_LO 0xB6
#define A3XX_RBBM_PERFCTR_RAS_0_HI 0xB7
#define A3XX_RBBM_PERFCTR_RAS_1_LO 0xB8
#define A3XX_RBBM_PERFCTR_RAS_1_HI 0xB9
#define A3XX_RBBM_PERFCTR_UCHE_0_LO 0xBA
#define A3XX_RBBM_PERFCTR_UCHE_0_HI 0xBB
#define A3XX_RBBM_PERFCTR_UCHE_1_LO 0xBC
#define A3XX_RBBM_PERFCTR_UCHE_1_HI 0xBD
#define A3XX_RBBM_PERFCTR_UCHE_2_LO 0xBE
#define A3XX_RBBM_PERFCTR_UCHE_2_HI 0xBF
#define A3XX_RBBM_PERFCTR_UCHE_3_LO 0xC0
#define A3XX_RBBM_PERFCTR_UCHE_3_HI 0xC1
#define A3XX_RBBM_PERFCTR_UCHE_4_LO 0xC2
#define A3XX_RBBM_PERFCTR_UCHE_4_HI 0xC3
#define A3XX_RBBM_PERFCTR_UCHE_5_LO 0xC4
#define A3XX_RBBM_PERFCTR_UCHE_5_HI 0xC5
#define A3XX_RBBM_PERFCTR_TP_0_LO 0xC6
#define A3XX_RBBM_PERFCTR_TP_0_HI 0xC7
#define A3XX_RBBM_PERFCTR_TP_1_LO 0xC8
#define A3XX_RBBM_PERFCTR_TP_1_HI 0xC9
#define A3XX_RBBM_PERFCTR_TP_2_LO 0xCA
#define A3XX_RBBM_PERFCTR_TP_2_HI 0xCB
#define A3XX_RBBM_PERFCTR_TP_3_LO 0xCC
#define A3XX_RBBM_PERFCTR_TP_3_HI 0xCD
#define A3XX_RBBM_PERFCTR_TP_4_LO 0xCE
#define A3XX_RBBM_PERFCTR_TP_4_HI 0xCF
#define A3XX_RBBM_PERFCTR_TP_5_LO 0xD0
#define A3XX_RBBM_PERFCTR_TP_5_HI 0xD1
#define A3XX_RBBM_PERFCTR_SP_0_LO 0xD2
#define A3XX_RBBM_PERFCTR_SP_0_HI 0xD3
#define A3XX_RBBM_PERFCTR_SP_1_LO 0xD4
#define A3XX_RBBM_PERFCTR_SP_1_HI 0xD5
#define A3XX_RBBM_PERFCTR_SP_2_LO 0xD6
#define A3XX_RBBM_PERFCTR_SP_2_HI 0xD7
#define A3XX_RBBM_PERFCTR_SP_3_LO 0xD8
#define A3XX_RBBM_PERFCTR_SP_3_HI 0xD9
#define A3XX_RBBM_PERFCTR_SP_4_LO 0xDA
#define A3XX_RBBM_PERFCTR_SP_4_HI 0xDB
#define A3XX_RBBM_PERFCTR_SP_5_LO 0xDC
#define A3XX_RBBM_PERFCTR_SP_5_HI 0xDD
#define A3XX_RBBM_PERFCTR_SP_6_LO 0xDE
#define A3XX_RBBM_PERFCTR_SP_6_HI 0xDF
#define A3XX_RBBM_PERFCTR_SP_7_LO 0xE0
#define A3XX_RBBM_PERFCTR_SP_7_HI 0xE1
#define A3XX_RBBM_PERFCTR_RB_0_LO 0xE2
#define A3XX_RBBM_PERFCTR_RB_0_HI 0xE3
#define A3XX_RBBM_PERFCTR_RB_1_LO 0xE4
#define A3XX_RBBM_PERFCTR_RB_1_HI 0xE5

#define A3XX_RBBM_RBBM_CTL 0x100
#define A3XX_RBBM_PERFCTR_PWR_0_LO 0x0EA
#define A3XX_RBBM_PERFCTR_PWR_0_HI 0x0EB
#define A3XX_RBBM_PERFCTR_PWR_1_LO 0x0EC
#define A3XX_RBBM_PERFCTR_PWR_1_HI 0x0ED
#define A3XX_RBBM_DEBUG_BUS_CTL             0x111
#define A3XX_RBBM_DEBUG_BUS_DATA_STATUS     0x112

/* Following two are same as on A2XX, just in a different place */
#define A3XX_CP_PFP_UCODE_ADDR 0x1C9
#define A3XX_CP_PFP_UCODE_DATA 0x1CA
#define A3XX_CP_ROQ_ADDR 0x1CC
#define A3XX_CP_ROQ_DATA 0x1CD
#define A3XX_CP_MERCIU_ADDR 0x1D1
#define A3XX_CP_MERCIU_DATA 0x1D2
#define A3XX_CP_MERCIU_DATA2 0x1D3
#define A3XX_CP_MEQ_ADDR 0x1DA
#define A3XX_CP_MEQ_DATA 0x1DB
#define A3XX_CP_PERFCOUNTER_SELECT 0x445
#define A3XX_CP_HW_FAULT  0x45C
#define A3XX_CP_AHB_FAULT 0x54D
#define A3XX_CP_PROTECT_CTRL 0x45E
#define A3XX_CP_PROTECT_STATUS 0x45F
#define A3XX_CP_PROTECT_REG_0 0x460
#define A3XX_CP_PROTECT_REG_1 0x461
#define A3XX_CP_PROTECT_REG_2 0x462
#define A3XX_CP_PROTECT_REG_3 0x463
#define A3XX_CP_PROTECT_REG_4 0x464
#define A3XX_CP_PROTECT_REG_5 0x465
#define A3XX_CP_PROTECT_REG_6 0x466
#define A3XX_CP_PROTECT_REG_7 0x467
#define A3XX_CP_PROTECT_REG_8 0x468
#define A3XX_CP_PROTECT_REG_9 0x469
#define A3XX_CP_PROTECT_REG_A 0x46A
#define A3XX_CP_PROTECT_REG_B 0x46B
#define A3XX_CP_PROTECT_REG_C 0x46C
#define A3XX_CP_PROTECT_REG_D 0x46D
#define A3XX_CP_PROTECT_REG_E 0x46E
#define A3XX_CP_PROTECT_REG_F 0x46F
#define A3XX_CP_SCRATCH_REG2 0x57A
#define A3XX_CP_SCRATCH_REG3 0x57B
#define A3XX_VSC_BIN_SIZE 0xC01
#define A3XX_VSC_SIZE_ADDRESS 0xC02
#define A3XX_VSC_PIPE_CONFIG_0 0xC06
#define A3XX_VSC_PIPE_DATA_ADDRESS_0 0xC07
#define A3XX_VSC_PIPE_DATA_LENGTH_0 0xC08
#define A3XX_VSC_PIPE_CONFIG_1 0xC09
#define A3XX_VSC_PIPE_DATA_ADDRESS_1 0xC0A
#define A3XX_VSC_PIPE_DATA_LENGTH_1 0xC0B
#define A3XX_VSC_PIPE_CONFIG_2 0xC0C
#define A3XX_VSC_PIPE_DATA_ADDRESS_2 0xC0D
#define A3XX_VSC_PIPE_DATA_LENGTH_2 0xC0E
#define A3XX_VSC_PIPE_CONFIG_3 0xC0F
#define A3XX_VSC_PIPE_DATA_ADDRESS_3 0xC10
#define A3XX_VSC_PIPE_DATA_LENGTH_3 0xC11
#define A3XX_VSC_PIPE_CONFIG_4 0xC12
#define A3XX_VSC_PIPE_DATA_ADDRESS_4 0xC13
#define A3XX_VSC_PIPE_DATA_LENGTH_4 0xC14
#define A3XX_VSC_PIPE_CONFIG_5 0xC15
#define A3XX_VSC_PIPE_DATA_ADDRESS_5 0xC16
#define A3XX_VSC_PIPE_DATA_LENGTH_5 0xC17
#define A3XX_VSC_PIPE_CONFIG_6 0xC18
#define A3XX_VSC_PIPE_DATA_ADDRESS_6 0xC19
#define A3XX_VSC_PIPE_DATA_LENGTH_6 0xC1A
#define A3XX_VSC_PIPE_CONFIG_7 0xC1B
#define A3XX_VSC_PIPE_DATA_ADDRESS_7 0xC1C
#define A3XX_VSC_PIPE_DATA_LENGTH_7 0xC1D
#define A3XX_PC_PERFCOUNTER0_SELECT 0xC48
#define A3XX_PC_PERFCOUNTER1_SELECT 0xC49
#define A3XX_PC_PERFCOUNTER2_SELECT 0xC4A
#define A3XX_PC_PERFCOUNTER3_SELECT 0xC4B
#define A3XX_GRAS_PERFCOUNTER0_SELECT 0xC88
#define A3XX_GRAS_PERFCOUNTER1_SELECT 0xC89
#define A3XX_GRAS_PERFCOUNTER2_SELECT 0xC8A
#define A3XX_GRAS_PERFCOUNTER3_SELECT 0xC8B
#define A3XX_GRAS_CL_USER_PLANE_X0 0xCA0
#define A3XX_GRAS_CL_USER_PLANE_Y0 0xCA1
#define A3XX_GRAS_CL_USER_PLANE_Z0 0xCA2
#define A3XX_GRAS_CL_USER_PLANE_W0 0xCA3
#define A3XX_GRAS_CL_USER_PLANE_X1 0xCA4
#define A3XX_GRAS_CL_USER_PLANE_Y1 0xCA5
#define A3XX_GRAS_CL_USER_PLANE_Z1 0xCA6
#define A3XX_GRAS_CL_USER_PLANE_W1 0xCA7
#define A3XX_GRAS_CL_USER_PLANE_X2 0xCA8
#define A3XX_GRAS_CL_USER_PLANE_Y2 0xCA9
#define A3XX_GRAS_CL_USER_PLANE_Z2 0xCAA
#define A3XX_GRAS_CL_USER_PLANE_W2 0xCAB
#define A3XX_GRAS_CL_USER_PLANE_X3 0xCAC
#define A3XX_GRAS_CL_USER_PLANE_Y3 0xCAD
#define A3XX_GRAS_CL_USER_PLANE_Z3 0xCAE
#define A3XX_GRAS_CL_USER_PLANE_W3 0xCAF
#define A3XX_GRAS_CL_USER_PLANE_X4 0xCB0
#define A3XX_GRAS_CL_USER_PLANE_Y4 0xCB1
#define A3XX_GRAS_CL_USER_PLANE_Z4 0xCB2
#define A3XX_GRAS_CL_USER_PLANE_W4 0xCB3
#define A3XX_GRAS_CL_USER_PLANE_X5 0xCB4
#define A3XX_GRAS_CL_USER_PLANE_Y5 0xCB5
#define A3XX_GRAS_CL_USER_PLANE_Z5 0xCB6
#define A3XX_GRAS_CL_USER_PLANE_W5 0xCB7
#define A3XX_RB_GMEM_BASE_ADDR 0xCC0
#define A3XX_RB_PERFCOUNTER0_SELECT   0xCC6
#define A3XX_RB_PERFCOUNTER1_SELECT   0xCC7
#define A3XX_HLSQ_PERFCOUNTER0_SELECT 0xE00
#define A3XX_HLSQ_PERFCOUNTER1_SELECT 0xE01
#define A3XX_HLSQ_PERFCOUNTER2_SELECT 0xE02
#define A3XX_HLSQ_PERFCOUNTER3_SELECT 0xE03
#define A3XX_HLSQ_PERFCOUNTER4_SELECT 0xE04
#define A3XX_HLSQ_PERFCOUNTER5_SELECT 0xE05
#define A3XX_VFD_PERFCOUNTER0_SELECT 0xE44
#define A3XX_VFD_PERFCOUNTER1_SELECT 0xE45
#define A3XX_VPC_VPC_DEBUG_RAM_SEL 0xE61
#define A3XX_VPC_VPC_DEBUG_RAM_READ 0xE62
#define A3XX_VPC_PERFCOUNTER0_SELECT 0xE64
#define A3XX_VPC_PERFCOUNTER1_SELECT 0xE65
#define A3XX_UCHE_CACHE_MODE_CONTROL_REG 0xE82
#define A3XX_UCHE_PERFCOUNTER0_SELECT 0xE84
#define A3XX_UCHE_PERFCOUNTER1_SELECT 0xE85
#define A3XX_UCHE_PERFCOUNTER2_SELECT 0xE86
#define A3XX_UCHE_PERFCOUNTER3_SELECT 0xE87
#define A3XX_UCHE_PERFCOUNTER4_SELECT 0xE88
#define A3XX_UCHE_PERFCOUNTER5_SELECT 0xE89
#define A3XX_UCHE_CACHE_INVALIDATE0_REG 0xEA0
#define A3XX_SP_PERFCOUNTER0_SELECT 0xEC4
#define A3XX_SP_PERFCOUNTER1_SELECT 0xEC5
#define A3XX_SP_PERFCOUNTER2_SELECT 0xEC6
#define A3XX_SP_PERFCOUNTER3_SELECT 0xEC7
#define A3XX_SP_PERFCOUNTER4_SELECT 0xEC8
#define A3XX_SP_PERFCOUNTER5_SELECT 0xEC9
#define A3XX_SP_PERFCOUNTER6_SELECT 0xECA
#define A3XX_SP_PERFCOUNTER7_SELECT 0xECB
#define A3XX_TP_PERFCOUNTER0_SELECT 0xF04
#define A3XX_TP_PERFCOUNTER1_SELECT 0xF05
#define A3XX_TP_PERFCOUNTER2_SELECT 0xF06
#define A3XX_TP_PERFCOUNTER3_SELECT 0xF07
#define A3XX_TP_PERFCOUNTER4_SELECT 0xF08
#define A3XX_TP_PERFCOUNTER5_SELECT 0xF09
#define A3XX_GRAS_CL_CLIP_CNTL 0x2040
#define A3XX_GRAS_CL_GB_CLIP_ADJ 0x2044
#define A3XX_GRAS_CL_VPORT_XOFFSET 0x2048
#define A3XX_GRAS_CL_VPORT_ZOFFSET 0x204C
#define A3XX_GRAS_CL_VPORT_ZSCALE 0x204D
#define A3XX_GRAS_SU_POINT_MINMAX 0x2068
#define A3XX_GRAS_SU_POINT_SIZE 0x2069
#define A3XX_GRAS_SU_POLY_OFFSET_SCALE 0x206C
#define A3XX_GRAS_SU_POLY_OFFSET_OFFSET 0x206D
#define A3XX_GRAS_SU_MODE_CONTROL 0x2070
#define A3XX_GRAS_SC_CONTROL 0x2072
#define A3XX_GRAS_SC_SCREEN_SCISSOR_TL 0x2074
#define A3XX_GRAS_SC_SCREEN_SCISSOR_BR 0x2075
#define A3XX_GRAS_SC_WINDOW_SCISSOR_TL 0x2079
#define A3XX_GRAS_SC_WINDOW_SCISSOR_BR 0x207A
#define A3XX_RB_MODE_CONTROL 0x20C0
#define A3XX_RB_RENDER_CONTROL 0x20C1
#define A3XX_RB_MSAA_CONTROL 0x20C2
#define A3XX_RB_MRT_CONTROL0 0x20C4
#define A3XX_RB_MRT_BUF_INFO0 0x20C5
#define A3XX_RB_MRT_BLEND_CONTROL0 0x20C7
#define A3XX_RB_MRT_BLEND_CONTROL1 0x20CB
#define A3XX_RB_MRT_BLEND_CONTROL2 0x20CF
#define A3XX_RB_MRT_BLEND_CONTROL3 0x20D3
#define A3XX_RB_BLEND_RED 0x20E4
#define A3XX_RB_COPY_CONTROL 0x20EC
#define A3XX_RB_COPY_DEST_INFO 0x20EF
#define A3XX_RB_DEPTH_CONTROL 0x2100
#define A3XX_RB_STENCIL_CONTROL 0x2104
#define A3XX_PC_VSTREAM_CONTROL 0x21E4
#define A3XX_PC_VERTEX_REUSE_BLOCK_CNTL 0x21EA
#define A3XX_PC_PRIM_VTX_CNTL 0x21EC
#define A3XX_PC_RESTART_INDEX 0x21ED
#define A3XX_HLSQ_CONTROL_0_REG 0x2200
#define A3XX_HLSQ_VS_CONTROL_REG 0x2204
#define A3XX_HLSQ_CONST_FSPRESV_RANGE_REG 0x2207
#define A3XX_HLSQ_CL_NDRANGE_0_REG 0x220A
#define A3XX_HLSQ_CL_NDRANGE_2_REG 0x220C
#define A3XX_HLSQ_CL_CONTROL_0_REG 0x2211
#define A3XX_HLSQ_CL_CONTROL_1_REG 0x2212
#define A3XX_HLSQ_CL_KERNEL_CONST_REG 0x2214
#define A3XX_HLSQ_CL_KERNEL_GROUP_X_REG 0x2215
#define A3XX_HLSQ_CL_KERNEL_GROUP_Z_REG 0x2217
#define A3XX_HLSQ_CL_WG_OFFSET_REG 0x221A
#define A3XX_VFD_CONTROL_0 0x2240
#define A3XX_VFD_INDEX_MIN 0x2242
#define A3XX_VFD_INDEX_MAX 0x2243
#define A3XX_VFD_FETCH_INSTR_0_0 0x2246
#define A3XX_VFD_FETCH_INSTR_0_4 0x224E
#define A3XX_VFD_FETCH_INSTR_1_F 0x2265
#define A3XX_VFD_DECODE_INSTR_0 0x2266
#define A3XX_VFD_VS_THREADING_THRESHOLD 0x227E
#define A3XX_VPC_ATTR 0x2280
#define A3XX_VPC_VARY_CYLWRAP_ENABLE_1 0x228B
#define A3XX_SP_SP_CTRL_REG 0x22C0
#define A3XX_SP_VS_CTRL_REG0 0x22C4
#define A3XX_SP_VS_CTRL_REG1 0x22C5
#define A3XX_SP_VS_PARAM_REG 0x22C6
#define A3XX_SP_VS_OUT_REG_7 0x22CE
#define A3XX_SP_VS_VPC_DST_REG_0 0x22D0
#define A3XX_SP_VS_OBJ_OFFSET_REG 0x22D4
#define A3XX_SP_VS_OBJ_START_REG 0x22D5
#define A3XX_SP_VS_PVT_MEM_ADDR_REG 0x22D7
#define A3XX_SP_VS_PVT_MEM_SIZE_REG 0x22D8
#define A3XX_SP_VS_LENGTH_REG 0x22DF
#define A3XX_SP_FS_CTRL_REG0 0x22E0
#define A3XX_SP_FS_CTRL_REG1 0x22E1
#define A3XX_SP_FS_OBJ_OFFSET_REG 0x22E2
#define A3XX_SP_FS_OBJ_START_REG 0x22E3
#define A3XX_SP_FS_PVT_MEM_ADDR_REG 0x22E5
#define A3XX_SP_FS_PVT_MEM_SIZE_REG 0x22E6
#define A3XX_SP_FS_FLAT_SHAD_MODE_REG_0 0x22E8
#define A3XX_SP_FS_FLAT_SHAD_MODE_REG_1 0x22E9
#define A3XX_SP_FS_OUTPUT_REG 0x22EC
#define A3XX_SP_FS_MRT_REG_0 0x22F0
#define A3XX_SP_FS_IMAGE_OUTPUT_REG_0 0x22F4
#define A3XX_SP_FS_IMAGE_OUTPUT_REG_3 0x22F7
#define A3XX_SP_FS_LENGTH_REG 0x22FF
#define A3XX_TPL1_TP_VS_TEX_OFFSET 0x2340
#define A3XX_TPL1_TP_FS_TEX_OFFSET 0x2342
#define A3XX_TPL1_TP_FS_BORDER_COLOR_BASE_ADDR 0x2343
#define A3XX_VBIF_CLKON 0x3001
#define A3XX_VBIF_FIXED_SORT_EN 0x300C
#define A3XX_VBIF_FIXED_SORT_SEL0 0x300D
#define A3XX_VBIF_FIXED_SORT_SEL1 0x300E
#define A3XX_VBIF_ABIT_SORT 0x301C
#define A3XX_VBIF_ABIT_SORT_CONF 0x301D
#define A3XX_VBIF_GATE_OFF_WRREQ_EN 0x302A
#define A3XX_VBIF_IN_RD_LIM_CONF0 0x302C
#define A3XX_VBIF_IN_RD_LIM_CONF1 0x302D
#define A3XX_VBIF_IN_WR_LIM_CONF0 0x3030
#define A3XX_VBIF_IN_WR_LIM_CONF1 0x3031
#define A3XX_VBIF_OUT_RD_LIM_CONF0 0x3034
#define A3XX_VBIF_OUT_WR_LIM_CONF0 0x3035
#define A3XX_VBIF_DDR_OUT_MAX_BURST 0x3036
#define A3XX_VBIF_ARB_CTL 0x303C
#define A3XX_VBIF_ROUND_ROBIN_QOS_ARB 0x3049
#define A3XX_VBIF_OUT_AXI_AMEMTYPE_CONF0 0x3058
#define A3XX_VBIF_OUT_AXI_AOOO_EN 0x305E
#define A3XX_VBIF_OUT_AXI_AOOO 0x305F
#define A3XX_VBIF_PERF_CNT_EN 0x3070
#define A3XX_VBIF_PERF_CNT_CLR 0x3071
#define A3XX_VBIF_PERF_CNT_SEL 0x3072
#define A3XX_VBIF_PERF_CNT0_LO 0x3073
#define A3XX_VBIF_PERF_CNT0_HI 0x3074
#define A3XX_VBIF_PERF_CNT1_LO 0x3075
#define A3XX_VBIF_PERF_CNT1_HI 0x3076
#define A3XX_VBIF_PERF_PWR_CNT0_LO 0x3077
#define A3XX_VBIF_PERF_PWR_CNT0_HI 0x3078
#define A3XX_VBIF_PERF_PWR_CNT1_LO 0x3079
#define A3XX_VBIF_PERF_PWR_CNT1_HI 0x307a
#define A3XX_VBIF_PERF_PWR_CNT2_LO 0x307b
#define A3XX_VBIF_PERF_PWR_CNT2_HI 0x307c

/* Bit flags for RBBM_CTL */
#define RBBM_RBBM_CTL_RESET_PWR_CTR0  BIT(0)
#define RBBM_RBBM_CTL_RESET_PWR_CTR1  BIT(1)
#define RBBM_RBBM_CTL_ENABLE_PWR_CTR0  BIT(16)
#define RBBM_RBBM_CTL_ENABLE_PWR_CTR1  BIT(17)

/* Various flags used by the context switch code */

#define SP_MULTI 0
#define SP_BUFFER_MODE 1
#define SP_TWO_VTX_QUADS 0
#define SP_PIXEL_BASED 0
#define SP_R8G8B8A8_UNORM 8
#define SP_FOUR_PIX_QUADS 1

#define HLSQ_DIRECT 0
#define HLSQ_BLOCK_ID_SP_VS 4
#define HLSQ_SP_VS_INSTR 0
#define HLSQ_SP_FS_INSTR 0
#define HLSQ_BLOCK_ID_SP_FS 6
#define HLSQ_TWO_PIX_QUADS 0
#define HLSQ_TWO_VTX_QUADS 0
#define HLSQ_BLOCK_ID_TP_TEX 2
#define HLSQ_TP_TEX_SAMPLERS 0
#define HLSQ_TP_TEX_MEMOBJ 1
#define HLSQ_BLOCK_ID_TP_MIPMAP 3
#define HLSQ_TP_MIPMAP_BASE 1
#define HLSQ_FOUR_PIX_QUADS 1

#define RB_FACTOR_ONE 1
#define RB_BLEND_OP_ADD 0
#define RB_FACTOR_ZERO 0
#define RB_DITHER_DISABLE 0
#define RB_DITHER_ALWAYS 1
#define RB_FRAG_NEVER 0
#define RB_ENDIAN_NONE 0
#define RB_R8G8B8A8_UNORM 8
#define RB_RESOLVE_PASS 2
#define RB_CLEAR_MODE_RESOLVE 1
#define RB_TILINGMODE_LINEAR 0
#define RB_REF_NEVER 0
#define RB_FRAG_LESS 1
#define RB_REF_ALWAYS 7
#define RB_STENCIL_KEEP 0
#define RB_RENDERING_PASS 0
#define RB_TILINGMODE_32X32 2

#define PC_DRAW_TRIANGLES 2
#define PC_DI_PT_RECTLIST 8
#define PC_DI_SRC_SEL_AUTO_INDEX 2
#define PC_DI_INDEX_SIZE_16_BIT 0
#define PC_DI_IGNORE_VISIBILITY 0
#define PC_DI_PT_TRILIST 4
#define PC_DI_SRC_SEL_IMMEDIATE 1
#define PC_DI_INDEX_SIZE_32_BIT 1

#define UCHE_ENTIRE_CACHE 1
#define UCHE_OP_INVALIDATE 1

/*
 * The following are bit field shifts within some of the registers defined
 * above. These are used in the context switch code in conjunction with the
 * _SET macro
 */

#define GRAS_CL_CLIP_CNTL_CLIP_DISABLE 16
#define GRAS_CL_CLIP_CNTL_IJ_PERSP_CENTER 12
#define GRAS_CL_CLIP_CNTL_PERSP_DIVISION_DISABLE 21
#define GRAS_CL_CLIP_CNTL_VP_CLIP_CODE_IGNORE 19
#define GRAS_CL_CLIP_CNTL_VP_XFORM_DISABLE 20
#define GRAS_CL_CLIP_CNTL_ZFAR_CLIP_DISABLE 17
#define GRAS_CL_VPORT_XSCALE_VPORT_XSCALE 0
#define GRAS_CL_VPORT_YSCALE_VPORT_YSCALE 0
#define GRAS_CL_VPORT_ZSCALE_VPORT_ZSCALE 0
#define GRAS_SC_CONTROL_RASTER_MODE 12
#define GRAS_SC_CONTROL_RENDER_MODE 4
#define GRAS_SC_SCREEN_SCISSOR_BR_BR_X 0
#define GRAS_SC_SCREEN_SCISSOR_BR_BR_Y 16
#define GRAS_SC_WINDOW_SCISSOR_BR_BR_X 0
#define GRAS_SC_WINDOW_SCISSOR_BR_BR_Y 16
#define GRAS_SU_CTRLMODE_LINEHALFWIDTH 03
#define HLSQ_CONSTFSPRESERVEDRANGEREG_ENDENTRY 16
#define HLSQ_CONSTFSPRESERVEDRANGEREG_STARTENTRY 0
#define HLSQ_CTRL0REG_CHUNKDISABLE 26
#define HLSQ_CTRL0REG_CONSTSWITCHMODE 27
#define HLSQ_CTRL0REG_FSSUPERTHREADENABLE 6
#define HLSQ_CTRL0REG_FSTHREADSIZE 4
#define HLSQ_CTRL0REG_LAZYUPDATEDISABLE 28
#define HLSQ_CTRL0REG_RESERVED2 10
#define HLSQ_CTRL0REG_SPCONSTFULLUPDATE 29
#define HLSQ_CTRL0REG_SPSHADERRESTART 9
#define HLSQ_CTRL0REG_TPFULLUPDATE 30
#define HLSQ_CTRL1REG_RESERVED1 9
#define HLSQ_CTRL1REG_VSSUPERTHREADENABLE 8
#define HLSQ_CTRL1REG_VSTHREADSIZE 6
#define HLSQ_CTRL2REG_PRIMALLOCTHRESHOLD 26
#define HLSQ_FSCTRLREG_FSCONSTLENGTH 0
#define HLSQ_FSCTRLREG_FSCONSTSTARTOFFSET 12
#define HLSQ_FSCTRLREG_FSINSTRLENGTH 24
#define HLSQ_VSCTRLREG_VSINSTRLENGTH 24
#define PC_PRIM_VTX_CONTROL_POLYMODE_BACK_PTYPE 8
#define PC_PRIM_VTX_CONTROL_POLYMODE_FRONT_PTYPE 5
#define PC_PRIM_VTX_CONTROL_PROVOKING_VTX_LAST 25
#define PC_PRIM_VTX_CONTROL_STRIDE_IN_VPC 0
#define PC_DRAW_INITIATOR_PRIM_TYPE 0
#define PC_DRAW_INITIATOR_SOURCE_SELECT 6
#define PC_DRAW_INITIATOR_VISIBILITY_CULLING_MODE 9
#define PC_DRAW_INITIATOR_INDEX_SIZE 0x0B
#define PC_DRAW_INITIATOR_SMALL_INDEX 0x0D
#define PC_DRAW_INITIATOR_PRE_DRAW_INITIATOR_ENABLE 0x0E
#define RB_COPYCONTROL_COPY_GMEM_BASE 14
#define RB_COPYCONTROL_RESOLVE_CLEAR_MODE 4
#define RB_COPYDESTBASE_COPY_DEST_BASE 4
#define RB_COPYDESTINFO_COPY_COMPONENT_ENABLE 14
#define RB_COPYDESTINFO_COPY_DEST_ENDIAN 18
#define RB_COPYDESTINFO_COPY_DEST_FORMAT 2
#define RB_COPYDESTINFO_COPY_DEST_TILE 0
#define RB_COPYDESTPITCH_COPY_DEST_PITCH 0
#define RB_DEPTHCONTROL_Z_TEST_FUNC 4
#define RB_MODECONTROL_RENDER_MODE 8
#define RB_MODECONTROL_MARB_CACHE_SPLIT_MODE 15
#define RB_MODECONTROL_PACKER_TIMER_ENABLE 16
#define RB_MRTBLENDCONTROL_ALPHA_BLEND_OPCODE 21
#define RB_MRTBLENDCONTROL_ALPHA_DEST_FACTOR 24
#define RB_MRTBLENDCONTROL_ALPHA_SRC_FACTOR 16
#define RB_MRTBLENDCONTROL_CLAMP_ENABLE 29
#define RB_MRTBLENDCONTROL_RGB_BLEND_OPCODE 5
#define RB_MRTBLENDCONTROL_RGB_DEST_FACTOR 8
#define RB_MRTBLENDCONTROL_RGB_SRC_FACTOR 0
#define RB_MRTBUFBASE_COLOR_BUF_BASE 4
#define RB_MRTBUFINFO_COLOR_BUF_PITCH 17
#define RB_MRTBUFINFO_COLOR_FORMAT 0
#define RB_MRTBUFINFO_COLOR_TILE_MODE 6
#define RB_MRTCONTROL_COMPONENT_ENABLE 24
#define RB_MRTCONTROL_DITHER_MODE 12
#define RB_MRTCONTROL_READ_DEST_ENABLE 3
#define RB_MRTCONTROL_ROP_CODE 8
#define RB_MSAACONTROL_MSAA_DISABLE 10
#define RB_MSAACONTROL_SAMPLE_MASK 16
#define RB_RENDERCONTROL_ALPHA_TEST_FUNC 24
#define RB_RENDERCONTROL_BIN_WIDTH 4
#define RB_RENDERCONTROL_DISABLE_COLOR_PIPE 12
#define RB_STENCILCONTROL_STENCIL_FAIL 11
#define RB_STENCILCONTROL_STENCIL_FAIL_BF 23
#define RB_STENCILCONTROL_STENCIL_FUNC 8
#define RB_STENCILCONTROL_STENCIL_FUNC_BF 20
#define RB_STENCILCONTROL_STENCIL_ZFAIL 17
#define RB_STENCILCONTROL_STENCIL_ZFAIL_BF 29
#define RB_STENCILCONTROL_STENCIL_ZPASS 14
#define RB_STENCILCONTROL_STENCIL_ZPASS_BF 26
#define SP_FSCTRLREG0_FSFULLREGFOOTPRINT 10
#define SP_FSCTRLREG0_FSHALFREGFOOTPRINT 4
#define SP_FSCTRLREG0_FSICACHEINVALID 2
#define SP_FSCTRLREG0_FSINOUTREGOVERLAP 18
#define SP_FSCTRLREG0_FSINSTRBUFFERMODE 1
#define SP_FSCTRLREG0_FSLENGTH 24
#define SP_FSCTRLREG0_FSSUPERTHREADMODE 21
#define SP_FSCTRLREG0_FSTHREADMODE 0
#define SP_FSCTRLREG0_FSTHREADSIZE 20
#define SP_FSCTRLREG0_PIXLODENABLE 22
#define SP_FSCTRLREG1_FSCONSTLENGTH 0
#define SP_FSCTRLREG1_FSINITIALOUTSTANDING 20
#define SP_FSCTRLREG1_HALFPRECVAROFFSET 24
#define SP_FSMRTREG_REGID 0
#define SP_FSMRTREG_PRECISION 8
#define SP_FSOUTREG_PAD0 2
#define SP_IMAGEOUTPUTREG_MRTFORMAT 0
#define SP_IMAGEOUTPUTREG_DEPTHOUTMODE 3
#define SP_IMAGEOUTPUTREG_PAD0 6
#define SP_OBJOFFSETREG_CONSTOBJECTSTARTOFFSET 16
#define SP_OBJOFFSETREG_SHADEROBJOFFSETINIC 25
#define SP_SHADERLENGTH_LEN 0
#define SP_SPCTRLREG_CONSTMODE 18
#define SP_SPCTRLREG_LOMODE 22
#define SP_SPCTRLREG_SLEEPMODE 20
#define SP_VSCTRLREG0_VSFULLREGFOOTPRINT 10
#define SP_VSCTRLREG0_VSICACHEINVALID 2
#define SP_VSCTRLREG0_VSINSTRBUFFERMODE 1
#define SP_VSCTRLREG0_VSLENGTH 24
#define SP_VSCTRLREG0_VSSUPERTHREADMODE 21
#define SP_VSCTRLREG0_VSTHREADMODE 0
#define SP_VSCTRLREG0_VSTHREADSIZE 20
#define SP_VSCTRLREG1_VSINITIALOUTSTANDING 24
#define SP_VSOUTREG_COMPMASK0 9
#define SP_VSPARAMREG_POSREGID 0
#define SP_VSPARAMREG_PSIZEREGID 8
#define SP_VSPARAMREG_TOTALVSOUTVAR 20
#define SP_VSVPCDSTREG_OUTLOC0 0
#define TPL1_TPTEXOFFSETREG_BASETABLEPTR 16
#define TPL1_TPTEXOFFSETREG_MEMOBJOFFSET 8
#define TPL1_TPTEXOFFSETREG_SAMPLEROFFSET 0
#define UCHE_INVALIDATE1REG_OPCODE 0x1C
#define UCHE_INVALIDATE1REG_ALLORPORTION 0x1F
#define VFD_BASEADDR_BASEADDR 0
#define VFD_CTRLREG0_PACKETSIZE 18
#define VFD_CTRLREG0_STRMDECINSTRCNT 22
#define VFD_CTRLREG0_STRMFETCHINSTRCNT 27
#define VFD_CTRLREG0_TOTALATTRTOVS 0
#define VFD_CTRLREG1_MAXSTORAGE 0
#define VFD_CTRLREG1_REGID4INST 24
#define VFD_CTRLREG1_REGID4VTX 16
#define VFD_DECODEINSTRUCTIONS_CONSTFILL 4
#define VFD_DECODEINSTRUCTIONS_FORMAT 6
#define VFD_DECODEINSTRUCTIONS_LASTCOMPVALID 29
#define VFD_DECODEINSTRUCTIONS_REGID 12
#define VFD_DECODEINSTRUCTIONS_SHIFTCNT 24
#define VFD_DECODEINSTRUCTIONS_SWITCHNEXT 30
#define VFD_DECODEINSTRUCTIONS_WRITEMASK 0
#define VFD_FETCHINSTRUCTIONS_BUFSTRIDE 7
#define VFD_FETCHINSTRUCTIONS_FETCHSIZE 0
#define VFD_FETCHINSTRUCTIONS_INDEXDECODE 18
#define VFD_FETCHINSTRUCTIONS_STEPRATE 24
#define VFD_FETCHINSTRUCTIONS_SWITCHNEXT 17
#define VFD_THREADINGTHRESHOLD_REGID_VTXCNT 8
#define VFD_THREADINGTHRESHOLD_REGID_THRESHOLD 0
#define VFD_THREADINGTHRESHOLD_RESERVED6 4
#define VPC_VPCATTR_LMSIZE 28
#define VPC_VPCATTR_THRHDASSIGN 12
#define VPC_VPCATTR_TOTALATTR 0
#define VPC_VPCPACK_NUMFPNONPOSVAR 8
#define VPC_VPCPACK_NUMNONPOSVSVAR 16
#define VPC_VPCVARPSREPLMODE_COMPONENT08 0
#define VPC_VPCVARPSREPLMODE_COMPONENT09 2
#define VPC_VPCVARPSREPLMODE_COMPONENT0A 4
#define VPC_VPCVARPSREPLMODE_COMPONENT0B 6
#define VPC_VPCVARPSREPLMODE_COMPONENT0C 8
#define VPC_VPCVARPSREPLMODE_COMPONENT0D 10
#define VPC_VPCVARPSREPLMODE_COMPONENT0E 12
#define VPC_VPCVARPSREPLMODE_COMPONENT0F 14
#define VPC_VPCVARPSREPLMODE_COMPONENT10 16
#define VPC_VPCVARPSREPLMODE_COMPONENT11 18
#define VPC_VPCVARPSREPLMODE_COMPONENT12 20
#define VPC_VPCVARPSREPLMODE_COMPONENT13 22
#define VPC_VPCVARPSREPLMODE_COMPONENT14 24
#define VPC_VPCVARPSREPLMODE_COMPONENT15 26
#define VPC_VPCVARPSREPLMODE_COMPONENT16 28
#define VPC_VPCVARPSREPLMODE_COMPONENT17 30

/* RBBM Debug bus block IDs */
#define RBBM_BLOCK_ID_NONE             0x0
#define RBBM_BLOCK_ID_CP               0x1
#define RBBM_BLOCK_ID_RBBM             0x2
#define RBBM_BLOCK_ID_VBIF             0x3
#define RBBM_BLOCK_ID_HLSQ             0x4
#define RBBM_BLOCK_ID_UCHE             0x5
#define RBBM_BLOCK_ID_PC               0x8
#define RBBM_BLOCK_ID_VFD              0x9
#define RBBM_BLOCK_ID_VPC              0xa
#define RBBM_BLOCK_ID_TSE              0xb
#define RBBM_BLOCK_ID_RAS              0xc
#define RBBM_BLOCK_ID_VSC              0xd
#define RBBM_BLOCK_ID_SP_0             0x10
#define RBBM_BLOCK_ID_SP_1             0x11
#define RBBM_BLOCK_ID_SP_2             0x12
#define RBBM_BLOCK_ID_SP_3             0x13
#define RBBM_BLOCK_ID_TPL1_0           0x18
#define RBBM_BLOCK_ID_TPL1_1           0x19
#define RBBM_BLOCK_ID_TPL1_2           0x1a
#define RBBM_BLOCK_ID_TPL1_3           0x1b
#define RBBM_BLOCK_ID_RB_0             0x20
#define RBBM_BLOCK_ID_RB_1             0x21
#define RBBM_BLOCK_ID_RB_2             0x22
#define RBBM_BLOCK_ID_RB_3             0x23
#define RBBM_BLOCK_ID_MARB_0           0x28
#define RBBM_BLOCK_ID_MARB_1           0x29
#define RBBM_BLOCK_ID_MARB_2           0x2a
#define RBBM_BLOCK_ID_MARB_3           0x2b

/* RBBM_CLOCK_CTL default value */
#define A305_RBBM_CLOCK_CTL_DEFAULT   0xAAAAAAAA
#define A305C_RBBM_CLOCK_CTL_DEFAULT  0xAAAAAAAA
#define A320_RBBM_CLOCK_CTL_DEFAULT   0xBFFFFFFF
#define A330_RBBM_CLOCK_CTL_DEFAULT   0xBFFCFFFF
#define A330v2_RBBM_CLOCK_CTL_DEFAULT 0xAAAAAAAA
#define A305B_RBBM_CLOCK_CTL_DEFAULT  0xAAAAAAAA

#define A330_RBBM_GPR0_CTL_DEFAULT    0x00000000
#define A330v2_RBBM_GPR0_CTL_DEFAULT  0x05515455

/* COUNTABLE FOR SP PERFCOUNTER */
#define SP_FS_FULL_ALU_INSTRUCTIONS    0x0E
#define SP_ALU_ACTIVE_CYCLES           0x1D
#define SP0_ICL1_MISSES                0x1A
#define SP_FS_CFLOW_INSTRUCTIONS       0x0C

/* VBIF PERFCOUNTER ENA/CLR values */
#define VBIF_PERF_CNT_0 BIT(0)
#define VBIF_PERF_CNT_1 BIT(1)
#define VBIF_PERF_PWR_CNT_0 BIT(2)
#define VBIF_PERF_PWR_CNT_1 BIT(3)
#define VBIF_PERF_PWR_CNT_2 BIT(4)

/* VBIF PERFCOUNTER SEL values */
#define VBIF_PERF_CNT_0_SEL 0
#define VBIF_PERF_CNT_0_SEL_MASK 0x7f
#define VBIF_PERF_CNT_1_SEL 8
#define VBIF_PERF_CNT_1_SEL_MASK 0x7f00

/* VBIF countables */
#define VBIF_DDR_TOTAL_CYCLES 110

#endif
