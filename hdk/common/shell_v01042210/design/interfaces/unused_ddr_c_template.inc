// Amazon FPGA Hardware Development Kit
//
// Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0

  assign cl_sh_ddr_awid     =  16'b0;
  assign cl_sh_ddr_awaddr   =  64'b0;
  assign cl_sh_ddr_awlen    =   8'b0;
  assign cl_sh_ddr_awsize   =   3'b0;
  assign cl_sh_ddr_awvalid  =   1'b0;
  assign cl_sh_ddr_awburst  =   2'b01;  // Only INCR is supported, must be tied to 2'b01

  assign cl_sh_ddr_wid      =  16'b0;
  assign cl_sh_ddr_wdata    = 512'b0;
  assign cl_sh_ddr_wstrb    =  64'b0;
  assign cl_sh_ddr_wlast    =   1'b0;
  assign cl_sh_ddr_wvalid   =   1'b0;

  assign cl_sh_ddr_bready   =   1'b0;

  assign cl_sh_ddr_arid     =  16'b0;
  assign cl_sh_ddr_araddr   =  64'b0;
  assign cl_sh_ddr_arlen    =   8'b0;
  assign cl_sh_ddr_arsize   =   3'b0;
  assign cl_sh_ddr_arvalid  =   1'b0;
  assign cl_sh_ddr_arburst  =   2'b01;  // Only INCR is supported, must be tied to 2'b01

  assign cl_sh_ddr_rready   =   1'b0;

