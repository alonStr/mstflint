/*
 * Copyright (C) Jan 2013 Mellanox Technologies Ltd. All rights reserved.
 * Copyright (c) 2021 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 *
 * This software is available to you under a choice of one of two
 * licenses.  You may choose to be licensed under the terms of the GNU
 * General Public License (GPL) Version 2, available from the file
 * COPYING in the main directory of this source tree, or the
 * OpenIB.org BSD license below:
 *
 *     Redistribution and use in source and binary forms, with or
 *     without modification, are permitted provided that the following
 *     conditions are met:
 *
 *      - Redistributions of source code must retain the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer.
 *
 *      - Redistributions in binary form must reproduce the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer in the documentation and/or other materials
 *        provided with the distribution.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
*/

/*
 * mflash_dev_capabillity.h
 *
 *  Created on: Jul 8, 2018
 *      Author: idanme
 */

#ifndef USER_MFLASH_MFLASH_DEV_CAPABILITY_H_
#define USER_MFLASH_MFLASH_DEV_CAPABILITY_H_

#include "mflash_pack_layer.h"

#ifndef UEFI_BUILD
#define FLASH_DPRINTF(args)        do { char *reacDebug = getenv("MFT_FLASH_DEBUG"); \
                                  if (reacDebug != NULL) {  printf("\33[2K\r"); \
                                      printf("[MFT_FLASH_DEBUG]: -D- "); printf args; fflush(stdout);} } while (0)
#else
#define FLASH_DPRINTF(...)
#endif


//When (*status != MFE_OK) return value is undefined
int is_four_byte_address_needed(mflash *mfl, MfError *status);
int is_flash_enable_needed(mflash *mfl, MfError *status);
int is_icmdif_supported(mflash *mfl, MfError *status, int* is7NmSuppported);
int is_supports_sw_reset(mflash *mfl, MfError *status);


#endif /* USER_MFLASH_MFLASH_DEV_CAPABILITY_H_ */
