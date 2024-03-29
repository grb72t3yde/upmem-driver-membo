/* SPDX-License-Identifier: GPL-2.0 */
/* Copyright 2020 UPMEM. All rights reserved. */
#ifndef DPU_PCI_IDS_H
#define DPU_PCI_IDS_H

/* FPGA kc705 driver */
#define KC705_VENDOR_ID 0xFFF0
#define KC705_DEVICE_ID 0x1000

#define KC705_SUBVENDOR_ID_1DPU 0x0001
#define KC705_SUBVENDOR_ID_8DPU 0x0008

/* FPGA AWS driver */
#define CL_DRAM_DMA_VENDOR_ID 0x1D0F
#define CL_DRAM_DMA_DEVICE_ID 0xF001
#define AWS_DPU_VENDOR_ID 0x1D0F
#define AWS_DPU_DEVICE_ID 0xF010
#define BITTWARE_VENDOR_ID 0xFFF0
#define BITTWARE_FPGA_PCIE3_DEVICE_ID 0x1001

#endif /* DPU_PCI_IDS_H */
