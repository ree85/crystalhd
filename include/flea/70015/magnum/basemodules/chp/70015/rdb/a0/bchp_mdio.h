/***************************************************************************
 *     Copyright (c) 1999-2009, Broadcom Corporation
 *     All Rights Reserved
 *     Confidential Property of Broadcom Corporation
 *
 *
 * THIS SOFTWARE MAY ONLY BE USED SUBJECT TO AN EXECUTED SOFTWARE LICENSE
 * AGREEMENT  BETWEEN THE USER AND BROADCOM.  YOU HAVE NO RIGHT TO USE OR
 * EXPLOIT THIS MATERIAL EXCEPT SUBJECT TO THE TERMS OF SUCH AN AGREEMENT.
 *
 * $brcm_Workfile: bchp_mdio.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 7/17/09 8:10p $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Fri Jul 17 19:42:08 2009
 *                 MD5 Checksum         2914699efc3fb3edefca5cb4f4f38b34
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/70015/rdb/a0/bchp_mdio.h $
 * 
 * Hydra_Software_Devel/1   7/17/09 8:10p albertl
 * PR56880: Initial revision.
 *
 ***************************************************************************/

#ifndef BCHP_MDIO_H__
#define BCHP_MDIO_H__

/***************************************************************************
 *MDIO - PCIE MDIO Registers
 ***************************************************************************/
#define BCHP_MDIO_CTRL0                          0x00500760 /* PCIE Serdes MDIO Control Register 0 */
#define BCHP_MDIO_CTRL1                          0x00500764 /* PCIE Serdes MDIO Control Register 1 */
#define BCHP_MDIO_CTRL2                          0x00500768 /* PCIE Serdes MDIO Control Register 2 */

/***************************************************************************
 *CTRL0 - PCIE Serdes MDIO Control Register 0
 ***************************************************************************/
/* MDIO :: CTRL0 :: reserved0 [31:22] */
#define BCHP_MDIO_CTRL0_reserved0_MASK                             0xffc00000
#define BCHP_MDIO_CTRL0_reserved0_SHIFT                            22

/* MDIO :: CTRL0 :: WRITE_READ_COMMAND [21:21] */
#define BCHP_MDIO_CTRL0_WRITE_READ_COMMAND_MASK                    0x00200000
#define BCHP_MDIO_CTRL0_WRITE_READ_COMMAND_SHIFT                   21

/* MDIO :: CTRL0 :: PHYAD [20:16] */
#define BCHP_MDIO_CTRL0_PHYAD_MASK                                 0x001f0000
#define BCHP_MDIO_CTRL0_PHYAD_SHIFT                                16

/* MDIO :: CTRL0 :: reserved1 [15:05] */
#define BCHP_MDIO_CTRL0_reserved1_MASK                             0x0000ffe0
#define BCHP_MDIO_CTRL0_reserved1_SHIFT                            5

/* MDIO :: CTRL0 :: REGAD [04:00] */
#define BCHP_MDIO_CTRL0_REGAD_MASK                                 0x0000001f
#define BCHP_MDIO_CTRL0_REGAD_SHIFT                                0

/***************************************************************************
 *CTRL1 - PCIE Serdes MDIO Control Register 1
 ***************************************************************************/
/* MDIO :: CTRL1 :: WR_STATUS [31:31] */
#define BCHP_MDIO_CTRL1_WR_STATUS_MASK                             0x80000000
#define BCHP_MDIO_CTRL1_WR_STATUS_SHIFT                            31

/* MDIO :: CTRL1 :: reserved0 [30:16] */
#define BCHP_MDIO_CTRL1_reserved0_MASK                             0x7fff0000
#define BCHP_MDIO_CTRL1_reserved0_SHIFT                            16

/* MDIO :: CTRL1 :: Write_Data [15:00] */
#define BCHP_MDIO_CTRL1_Write_Data_MASK                            0x0000ffff
#define BCHP_MDIO_CTRL1_Write_Data_SHIFT                           0

/***************************************************************************
 *CTRL2 - PCIE Serdes MDIO Control Register 2
 ***************************************************************************/
/* MDIO :: CTRL2 :: RD_STATUS [31:31] */
#define BCHP_MDIO_CTRL2_RD_STATUS_MASK                             0x80000000
#define BCHP_MDIO_CTRL2_RD_STATUS_SHIFT                            31

/* MDIO :: CTRL2 :: reserved0 [30:16] */
#define BCHP_MDIO_CTRL2_reserved0_MASK                             0x7fff0000
#define BCHP_MDIO_CTRL2_reserved0_SHIFT                            16

/* MDIO :: CTRL2 :: Read_Data [15:00] */
#define BCHP_MDIO_CTRL2_Read_Data_MASK                             0x0000ffff
#define BCHP_MDIO_CTRL2_Read_Data_SHIFT                            0

#endif /* #ifndef BCHP_MDIO_H__ */

/* End of File */