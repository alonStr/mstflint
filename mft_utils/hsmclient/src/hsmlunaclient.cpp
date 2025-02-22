/*
 * Copyright (c) 2020-2021 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
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
 */

#ifndef __WIN__

#include "hsmlunaclient.h"
#include "hex64.h"
using namespace std;
unsigned char HSMLunaClient::Modulus[MODULUS_SIZE] = {
#if 1
0xd2, 0xd9, 0xc8, 0x96, 0x04, 0xd5, 0xeb, 0xfc, 0x5d, 0x45, 0x34, 0xc5, 0xdb, 0x02,
0x65, 0xc7, 0x4c, 0x15, 0xcf, 0xde, 0xee, 0x10, 0x93, 0x15, 0x1a, 0xb7, 0xb2, 0xcc, 0x70,
0x0b, 0x8c, 0xdb, 0x3a, 0xa7, 0x23, 0xc5, 0x59, 0xf6, 0xc0, 0x88, 0xfb, 0x50, 0x74, 0x33,
0xb3, 0x58, 0xd2, 0x5f, 0x21, 0xcf, 0x3d, 0x8c, 0x52, 0xb1, 0x5a, 0x25, 0xd3, 0x68, 0x76,
0x25, 0xda, 0x08, 0xc7, 0x4d, 0x80, 0x39, 0xfa, 0x7c, 0xd7, 0xfe, 0xea, 0x35, 0xe8, 0x49,
0x9d, 0xd8, 0xe2, 0x43, 0x85, 0xcc, 0xb2, 0xa6, 0x40, 0xe4, 0x0e, 0x63, 0xf8, 0x2b, 0x72,
0xa9, 0xf8, 0xfe, 0x7d, 0x47, 0x59, 0x71, 0x03, 0x20, 0x0e, 0x6e, 0x27, 0xf6, 0x2d, 0xba,
0xf5, 0x75, 0xc1, 0xb4, 0x9f, 0xd4, 0x67, 0xb3, 0x3c, 0xea, 0x16, 0xe8, 0x9b, 0xe5, 0xd2,
0xd4, 0xf9, 0xfe, 0xdc, 0x6c, 0x42, 0xe6, 0x33, 0x0e, 0xd5, 0x21, 0x09, 0x22, 0xc3, 0x14,
0x2c, 0x49, 0xad, 0xe8, 0xb4, 0xb8, 0x65, 0x9e, 0xa9, 0x5d, 0x6f, 0x95, 0x0e, 0x02, 0x39,
0x63, 0x0a, 0xa8, 0xe8, 0x51, 0x82, 0x1c, 0xa3, 0x8f, 0x20, 0xbf, 0x3e, 0x72, 0xee, 0x58,
0x24, 0x97, 0xe6, 0xc1, 0x84, 0x84, 0x6d, 0x32, 0x21, 0xe8, 0x4c, 0xd5, 0x98, 0xcf, 0xb5,
0x60, 0x85, 0xef, 0x3d, 0x99, 0x76, 0x55, 0x10, 0x46, 0x34, 0x05, 0x22, 0xc6, 0xf2, 0x06,
0x79, 0xaf, 0x33, 0x3f, 0x36, 0x08, 0xcb, 0xcd, 0xa4, 0xa5, 0xd5, 0xd7, 0xc8, 0x70, 0x4b,
0xe0, 0x78, 0x00, 0x6c, 0x67, 0xf6, 0x7d, 0xda, 0x0d, 0x7c, 0x5f, 0x09, 0x83, 0xc1, 0x6e,
0x0c, 0x51, 0x25, 0x1e, 0x2d, 0x4c, 0xee, 0xf7, 0xa9, 0xb6, 0x91, 0x1a, 0x38, 0xb7, 0x7c,
0xbd, 0x1c, 0x17, 0x4e, 0xb6, 0xc6, 0x23, 0x03, 0x39, 0x39, 0xa7, 0xee, 0x4e, 0x4d, 0x3a,
0x5f, 0xf5, 0x2e, 0xd0, 0x0c, 0x87, 0xea, 0xab, 0x4b, 0xbf, 0x5d, 0x1d, 0x4d, 0x27, 0x1e,
0x70, 0x3f, 0x2e, 0xf7, 0xf8, 0xa4, 0x2b, 0x45, 0xcb, 0x09, 0x6f, 0x5a, 0xcd, 0x08, 0xdc,
0x08, 0x17, 0xb0, 0x59, 0x53, 0xad, 0xb6, 0xbd, 0x8d, 0xb6, 0xa6, 0xb3, 0x13, 0xab, 0x00,
0xfe, 0x5e, 0x5b, 0xa7, 0xbd, 0xfa, 0xc4, 0x89, 0xb0, 0xcc, 0x88, 0x5c, 0xc4, 0xec, 0xc4,
0x73, 0x2c, 0x23, 0x14, 0x6c, 0x08, 0xe7, 0x8b, 0x9c, 0x83, 0x8c, 0xa8, 0xe6, 0x14, 0x37,
0x0d, 0xa0, 0xf9, 0x8b, 0xa9, 0x04, 0x1c, 0xfe, 0x2d, 0x08, 0x98, 0x5b, 0x16, 0x20, 0xf2,
0x20, 0xe0, 0x07, 0x58, 0xde, 0x7d, 0xa9, 0xda, 0x78, 0x02, 0x74, 0x92, 0x4b, 0xa3, 0x26,
0x2f, 0x27, 0xb3, 0xa0, 0xe1, 0x0c, 0x2e, 0xb1, 0x25, 0x34, 0x6f, 0xec, 0x02, 0xb5, 0xbd,
0x43, 0xf1, 0x8f, 0x81, 0xc8, 0xf0, 0x58, 0x8d, 0x61, 0x62, 0x37, 0x8d, 0x58, 0x1e, 0xe0,
0xed, 0x52, 0x15, 0x18, 0xd7, 0x99, 0x72, 0x8e, 0x85, 0x1b, 0xe8, 0x50, 0x67, 0x67, 0x77,
0xc5, 0x91, 0x54, 0xa4, 0x5a, 0x61, 0x72, 0x27, 0x09, 0x95, 0xa2, 0x73, 0x0d, 0xf9, 0x86,
0x6d, 0x7f, 0xb7, 0xad, 0x87, 0x5d, 0xd0, 0x6e, 0x3d, 0xeb, 0x0e, 0xab, 0xe9, 0x02, 0x26,
0x78, 0x22, 0x32, 0xb8, 0x3d, 0x70, 0x74, 0x5d, 0x86, 0x4b, 0xac, 0x6a, 0x43, 0xe5, 0x08,
0x60, 0x95, 0xc4, 0xcc, 0x74, 0xb4, 0x86, 0x06, 0x55, 0xa1, 0xbc, 0xfb, 0xc2, 0x28, 0x85,
0xc0, 0x62, 0x8d, 0xef, 0x47, 0x95, 0xa8, 0x4b, 0x53, 0x0a, 0x7f, 0xfe, 0x11, 0x49, 0xb7,
0xf2, 0xab, 0x38, 0xb5, 0x10, 0x32, 0xd9, 0xe5, 0x16, 0x78, 0xe2, 0xeb, 0xf7, 0xa9, 0xe9,
0x4b, 0xca, 0x41, 0xa4, 0x6f, 0x5f, 0x8c, 0x7a, 0x11, 0x3d, 0xfc, 0x3a, 0x7e, 0xa2, 0xc0,
0x0f, 0xd5, 0xd1
#else
0xb8, 0xb5, 0x0f, 0x49, 0x46, 0xb5, 0x5d, 0x58, 0x04, 0x8e,
0x52, 0x59, 0x39, 0xdf, 0xd6,0x29,0x45, 0x6b, 0x6c, 0x96, 0xbb, 0xab, 0xa5, 0x6f, 0x72, 0x1b,
 0x16, 0x96, 0x74, 0xd5, 0xf9,0xb4,0x41, 0xa3, 0x7c, 0xe1, 0x94, 0x73, 0x4b, 0xa7, 0x23, 0xff,
 0x61, 0xeb, 0xce, 0x5a, 0xe7,0x7f,0xe3, 0x74, 0xe8, 0x52, 0x5b, 0xd6, 0x5d, 0x5c, 0xdc, 0x98,
 0x49, 0xfe, 0x51, 0xc2, 0x7e,0x8f,0x3b, 0x37, 0x5c, 0xb3, 0x11, 0xed, 0x85, 0x91, 0x15, 0x92,
 0x24, 0xd8, 0xf1, 0x7b, 0x3d,0x2f,0x8b, 0xcd, 0x1b, 0x30, 0x14, 0xa3, 0x6b, 0x1b, 0x4d, 0x27,
 0xff, 0x6a, 0x58, 0x84, 0x9e,0x79,0x94, 0xca, 0x78, 0x64, 0x01, 0x33, 0xc3, 0x58, 0xfc, 0xd3,
 0x83, 0xeb, 0x2f, 0xab, 0x6f,0x85,0x5a, 0x38, 0x41, 0x3d, 0x73, 0x20, 0x1b, 0x82, 0xbc, 0x7e,
 0x76, 0xde, 0x5c, 0xfe, 0x42,0xd6,0x7b, 0x86, 0x4f, 0x79, 0x78, 0x29, 0x82, 0x87, 0xa6, 0x24,
 0x43, 0x39, 0x74, 0xfe, 0xf2,0x0c,0x08, 0xbe, 0xfa, 0x1e, 0x0a, 0x48, 0x6f, 0x14, 0x86, 0xc5,
 0xcd, 0x9a, 0x98, 0x09, 0x2d,0xf3,0xf3, 0x5a, 0x7a, 0xa4, 0xe6, 0x8a, 0x2e, 0x49, 0x8a, 0xde,
 0x73, 0xe9, 0x37, 0xa0, 0x5b,0xef,0xd0, 0xe0, 0x13, 0xac, 0x88, 0x5f, 0x59, 0x47, 0x96, 0x7f,
 0x78, 0x18, 0x0e, 0x44, 0x6a,0x5d,0xec, 0x6e, 0xed, 0x4f, 0xf6, 0x6a, 0x7a, 0x58, 0x6b, 0xfe,
 0x6c, 0x5a, 0xb9, 0xd2, 0x22,0x3a,0x1f, 0xdf, 0xc3, 0x09, 0x3f, 0x6b, 0x2e, 0xf1, 0x6d, 0xc3,
 0xfb, 0x4e, 0xd4, 0xf2, 0xa3,0x94,0x13, 0xb0, 0xbf, 0x1e, 0x06, 0x2e, 0x29, 0x55, 0x00, 0xaa,
 0x98, 0xd9, 0xe8, 0x77, 0x84,0x8b,0x3f, 0x5f, 0x5e, 0xf7, 0xf8, 0xa7, 0xe6, 0x02, 0xd2, 0x18,
 0xb0, 0x52, 0xd0, 0x37, 0x2e,0x53
#endif
};

unsigned char HSMLunaClient::PrivateKeyData[PRIVATE_DATA_SIZE] = {
#if 1
0x30, 0x82, 0x09, 0x44, 0x02, 0x01, 0x00, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7,
0x0d, 0x01, 0x01, 0x01, 0x05, 0x00, 0x04, 0x82, 0x09, 0x2e, 0x30, 0x82, 0x09, 0x2a, 0x02, 0x01,
0x00, 0x02, 0x82, 0x02, 0x01, 0x00, 0xd2, 0xd9, 0xc8, 0x96, 0x04, 0xd5, 0xeb, 0xfc, 0x5d, 0x45,
0x34, 0xc5, 0xdb, 0x02, 0x65, 0xc7, 0x4c, 0x15, 0xcf, 0xde, 0xee, 0x10, 0x93, 0x15, 0x1a, 0xb7,
0xb2, 0xcc, 0x70, 0x0b, 0x8c, 0xdb, 0x3a, 0xa7, 0x23, 0xc5, 0x59, 0xf6, 0xc0, 0x88, 0xfb, 0x50,
0x74, 0x33, 0xb3, 0x58, 0xd2, 0x5f, 0x21, 0xcf, 0x3d, 0x8c, 0x52, 0xb1, 0x5a, 0x25, 0xd3, 0x68,
0x76, 0x25, 0xda, 0x08, 0xc7, 0x4d, 0x80, 0x39, 0xfa, 0x7c, 0xd7, 0xfe, 0xea, 0x35, 0xe8, 0x49,
0x9d, 0xd8, 0xe2, 0x43, 0x85, 0xcc, 0xb2, 0xa6, 0x40, 0xe4, 0x0e, 0x63, 0xf8, 0x2b, 0x72, 0xa9,
0xf8, 0xfe, 0x7d, 0x47, 0x59, 0x71, 0x03, 0x20, 0x0e, 0x6e, 0x27, 0xf6, 0x2d, 0xba, 0xf5, 0x75,
0xc1, 0xb4, 0x9f, 0xd4, 0x67, 0xb3, 0x3c, 0xea, 0x16, 0xe8, 0x9b, 0xe5, 0xd2, 0xd4, 0xf9, 0xfe,
0xdc, 0x6c, 0x42, 0xe6, 0x33, 0x0e, 0xd5, 0x21, 0x09, 0x22, 0xc3, 0x14, 0x2c, 0x49, 0xad, 0xe8,
0xb4, 0xb8, 0x65, 0x9e, 0xa9, 0x5d, 0x6f, 0x95, 0x0e, 0x02, 0x39, 0x63, 0x0a, 0xa8, 0xe8, 0x51,
0x82, 0x1c, 0xa3, 0x8f, 0x20, 0xbf, 0x3e, 0x72, 0xee, 0x58, 0x24, 0x97, 0xe6, 0xc1, 0x84, 0x84,
0x6d, 0x32, 0x21, 0xe8, 0x4c, 0xd5, 0x98, 0xcf, 0xb5, 0x60, 0x85, 0xef, 0x3d, 0x99, 0x76, 0x55,
0x10, 0x46, 0x34, 0x05, 0x22, 0xc6, 0xf2, 0x06, 0x79, 0xaf, 0x33, 0x3f, 0x36, 0x08, 0xcb, 0xcd,
0xa4, 0xa5, 0xd5, 0xd7, 0xc8, 0x70, 0x4b, 0xe0, 0x78, 0x00, 0x6c, 0x67, 0xf6, 0x7d, 0xda, 0x0d,
0x7c, 0x5f, 0x09, 0x83, 0xc1, 0x6e, 0x0c, 0x51, 0x25, 0x1e, 0x2d, 0x4c, 0xee, 0xf7, 0xa9, 0xb6,
0x91, 0x1a, 0x38, 0xb7, 0x7c, 0xbd, 0x1c, 0x17, 0x4e, 0xb6, 0xc6, 0x23, 0x03, 0x39, 0x39, 0xa7,
0xee, 0x4e, 0x4d, 0x3a, 0x5f, 0xf5, 0x2e, 0xd0, 0x0c, 0x87, 0xea, 0xab, 0x4b, 0xbf, 0x5d, 0x1d,
0x4d, 0x27, 0x1e, 0x70, 0x3f, 0x2e, 0xf7, 0xf8, 0xa4, 0x2b, 0x45, 0xcb, 0x09, 0x6f, 0x5a, 0xcd,
0x08, 0xdc, 0x08, 0x17, 0xb0, 0x59, 0x53, 0xad, 0xb6, 0xbd, 0x8d, 0xb6, 0xa6, 0xb3, 0x13, 0xab,
0x00, 0xfe, 0x5e, 0x5b, 0xa7, 0xbd, 0xfa, 0xc4, 0x89, 0xb0, 0xcc, 0x88, 0x5c, 0xc4, 0xec, 0xc4,
0x73, 0x2c, 0x23, 0x14, 0x6c, 0x08, 0xe7, 0x8b, 0x9c, 0x83, 0x8c, 0xa8, 0xe6, 0x14, 0x37, 0x0d,
0xa0, 0xf9, 0x8b, 0xa9, 0x04, 0x1c, 0xfe, 0x2d, 0x08, 0x98, 0x5b, 0x16, 0x20, 0xf2, 0x20, 0xe0,
0x07, 0x58, 0xde, 0x7d, 0xa9, 0xda, 0x78, 0x02, 0x74, 0x92, 0x4b, 0xa3, 0x26, 0x2f, 0x27, 0xb3,
0xa0, 0xe1, 0x0c, 0x2e, 0xb1, 0x25, 0x34, 0x6f, 0xec, 0x02, 0xb5, 0xbd, 0x43, 0xf1, 0x8f, 0x81,
0xc8, 0xf0, 0x58, 0x8d, 0x61, 0x62, 0x37, 0x8d, 0x58, 0x1e, 0xe0, 0xed, 0x52, 0x15, 0x18, 0xd7,
0x99, 0x72, 0x8e, 0x85, 0x1b, 0xe8, 0x50, 0x67, 0x67, 0x77, 0xc5, 0x91, 0x54, 0xa4, 0x5a, 0x61,
0x72, 0x27, 0x09, 0x95, 0xa2, 0x73, 0x0d, 0xf9, 0x86, 0x6d, 0x7f, 0xb7, 0xad, 0x87, 0x5d, 0xd0,
0x6e, 0x3d, 0xeb, 0x0e, 0xab, 0xe9, 0x02, 0x26, 0x78, 0x22, 0x32, 0xb8, 0x3d, 0x70, 0x74, 0x5d,
0x86, 0x4b, 0xac, 0x6a, 0x43, 0xe5, 0x08, 0x60, 0x95, 0xc4, 0xcc, 0x74, 0xb4, 0x86, 0x06, 0x55,
0xa1, 0xbc, 0xfb, 0xc2, 0x28, 0x85, 0xc0, 0x62, 0x8d, 0xef, 0x47, 0x95, 0xa8, 0x4b, 0x53, 0x0a,
0x7f, 0xfe, 0x11, 0x49, 0xb7, 0xf2, 0xab, 0x38, 0xb5, 0x10, 0x32, 0xd9, 0xe5, 0x16, 0x78, 0xe2,
0xeb, 0xf7, 0xa9, 0xe9, 0x4b, 0xca, 0x41, 0xa4, 0x6f, 0x5f, 0x8c, 0x7a, 0x11, 0x3d, 0xfc, 0x3a,
0x7e, 0xa2, 0xc0, 0x0f, 0xd5, 0xd1, 0x02, 0x03, 0x01, 0x00, 0x01, 0x02, 0x82, 0x02, 0x01, 0x00,
0xc1, 0xc1, 0xdf, 0xd1, 0xfc, 0x1f, 0x98, 0xfc, 0x0f, 0xb9, 0xc9, 0x05, 0x08, 0x7c, 0xeb, 0x8a,
0x79, 0x20, 0x92, 0x25, 0x0a, 0x1f, 0xb1, 0x09, 0x73, 0xc3, 0xdb, 0x4a, 0x82, 0xac, 0x1a, 0x84,
0x5b, 0x21, 0xbc, 0x7d, 0x5e, 0x6e, 0xa1, 0xff, 0x3e, 0xf2, 0x6f, 0xd6, 0x12, 0xb9, 0x4c, 0x98,
0x9f, 0x39, 0x12, 0x16, 0x20, 0xe7, 0x59, 0x2f, 0xe9, 0x55, 0xd5, 0x3c, 0x73, 0x60, 0x1d, 0xc5,
0xda, 0x4f, 0x6d, 0x1f, 0xcc, 0x5d, 0x34, 0x5c, 0xd5, 0x58, 0xd0, 0xf4, 0xbc, 0xf7, 0xcf, 0xbc,
0x8b, 0x6e, 0xbb, 0xb2, 0xd6, 0x86, 0x87, 0x47, 0x65, 0xd7, 0x4c, 0x38, 0x90, 0x67, 0x40, 0x89,
0xd9, 0x95, 0x5b, 0xad, 0x5e, 0x8b, 0x9a, 0xfa, 0x73, 0x16, 0x03, 0x2b, 0x38, 0xb4, 0xb7, 0x96,
0xbe, 0x23, 0x5f, 0x69, 0xe1, 0xd9, 0x10, 0x25, 0x26, 0x96, 0x4d, 0x78, 0x2f, 0x01, 0xdb, 0x69,
0x85, 0xf1, 0x15, 0xb4, 0x1c, 0x10, 0x2d, 0xa2, 0x87, 0x6d, 0x90, 0xa4, 0xe2, 0xbd, 0x2a, 0x65,
0xf2, 0x63, 0xc6, 0xbb, 0xc4, 0x80, 0x7f, 0x0b, 0x38, 0x71, 0xae, 0x5f, 0x22, 0xee, 0x23, 0xe9,
0x9a, 0x39, 0x83, 0x4c, 0xfc, 0x53, 0x9a, 0x79, 0xba, 0x8c, 0xf6, 0xcb, 0x5a, 0xdd, 0x5d, 0xbd,
0xea, 0xee, 0xf4, 0x7d, 0xfe, 0x96, 0x1a, 0xc5, 0x2b, 0x38, 0x7f, 0xfc, 0x03, 0x51, 0xb4, 0xe3,
0x9d, 0x04, 0xd6, 0x4d, 0x69, 0x8a, 0x6c, 0xdd, 0x28, 0x6b, 0x91, 0x21, 0xd3, 0xa0, 0xb7, 0x50,
0x7a, 0x69, 0x8b, 0xdc, 0xd7, 0xc1, 0xb1, 0x81, 0x75, 0x1f, 0x6f, 0x6a, 0xe6, 0x13, 0x6d, 0x6c,
0xf3, 0x64, 0x9d, 0xf7, 0x5d, 0x29, 0x95, 0x6f, 0x81, 0x45, 0x83, 0x91, 0xd5, 0x0c, 0xc8, 0x53,
0xff, 0xbc, 0x6b, 0x59, 0x0a, 0x3a, 0xa2, 0x7b, 0xb3, 0xbf, 0xdd, 0xfd, 0x96, 0x7a, 0x4e, 0x32,
0x15, 0x98, 0x88, 0xa7, 0xf8, 0x5a, 0x1c, 0x7b, 0x5c, 0xd5, 0xab, 0x63, 0xa8, 0xfa, 0x65, 0xcd,
0x02, 0x49, 0xc3, 0x86, 0x3b, 0x52, 0x50, 0x76, 0x0b, 0x65, 0x74, 0xfc, 0x1b, 0xa8, 0x08, 0xef,
0x50, 0xb6, 0xa8, 0x42, 0xc3, 0x4d, 0x50, 0x66, 0x19, 0x44, 0x9f, 0x03, 0xa7, 0x69, 0x10, 0x1e,
0x41, 0xac, 0x15, 0x66, 0xf8, 0x29, 0x22, 0xfd, 0x8d, 0x9a, 0xdb, 0x6c, 0x1a, 0x7f, 0x18, 0x48,
0x16, 0xed, 0xef, 0x48, 0x60, 0xf7, 0x40, 0xce, 0xb3, 0x98, 0xde, 0xac, 0x71, 0x07, 0x8a, 0x47,
0x8e, 0x6e, 0x08, 0xc0, 0x22, 0x55, 0x85, 0x26, 0xfd, 0xd4, 0x91, 0x98, 0x69, 0xe0, 0x89, 0x52,
0xc9, 0xe5, 0x4b, 0xdd, 0x44, 0xa8, 0x14, 0x07, 0x44, 0xcf, 0x4f, 0x0e, 0xf2, 0x92, 0x0d, 0xf7,
0x41, 0x67, 0xab, 0x0e, 0xda, 0x81, 0x2b, 0x09, 0xcb, 0xea, 0x40, 0x38, 0xe1, 0xc2, 0x04, 0x07,
0x94, 0xa8, 0x7b, 0xb7, 0x7a, 0x52, 0x97, 0x1d, 0xcb, 0x67, 0x4e, 0x67, 0xbb, 0xa9, 0xde, 0x5f,
0xf9, 0xc4, 0xdb, 0x90, 0x7e, 0xaa, 0xa9, 0x36, 0xeb, 0x05, 0x0d, 0x4d, 0x69, 0x6b, 0x81, 0x40,
0x76, 0xf9, 0x8a, 0x31, 0x75, 0xbe, 0x66, 0xdf, 0xf1, 0x97, 0xd9, 0x7f, 0x8a, 0xbf, 0xae, 0xec,
0x51, 0xfc, 0x1d, 0x62, 0x27, 0x8d, 0xe4, 0x84, 0xc4, 0x62, 0xf4, 0x1f, 0x4a, 0xf6, 0x41, 0x7f,
0x4f, 0xd3, 0x8d, 0xda, 0x0b, 0x04, 0x85, 0xde, 0xbf, 0xba, 0x2b, 0x70, 0x3a, 0xb7, 0x6c, 0xb7,
0x84, 0xca, 0xe6, 0x6a, 0x54, 0xf6, 0xdd, 0x99, 0xdf, 0xbb, 0x45, 0xa1, 0xa9, 0x81, 0x4c, 0x18,
0x4a, 0x03, 0xfc, 0x9b, 0xf7, 0x75, 0x1f, 0x5e, 0x4b, 0xc1, 0x0d, 0x0a, 0xd5, 0x5e, 0xb5, 0x11,
0x0b, 0xef, 0x54, 0x20, 0xdc, 0x68, 0x04, 0x25, 0x31, 0x58, 0x1b, 0xb7, 0xd9, 0x09, 0x80, 0x01,
0x02, 0x82, 0x01, 0x01, 0x00, 0xf3, 0x94, 0xdf, 0x22, 0xe1, 0x32, 0x89, 0x47, 0xbb, 0x42, 0x47,
0x54, 0x55, 0xa0, 0x3a, 0x21, 0x35, 0xb4, 0xea, 0x15, 0x17, 0xe9, 0x66, 0xd3, 0x0c, 0x8c, 0xac,
0xef, 0xd8, 0xc2, 0xff, 0x38, 0xdc, 0x0e, 0xc9, 0x3e, 0x0a, 0x6e, 0x86, 0x59, 0xa5, 0x38, 0x23,
0x6d, 0x7a, 0xd6, 0xdb, 0x38, 0xd0, 0x14, 0xa3, 0x91, 0x1b, 0xd2, 0xbb, 0x3e, 0x30, 0xad, 0x3d,
0x15, 0xb1, 0x95, 0xb4, 0x53, 0x00, 0xb3, 0x6e, 0x99, 0xd1, 0x90, 0x5a, 0x4b, 0x2b, 0x0d, 0x99,
0xf2, 0x2a, 0x2b, 0x72, 0x69, 0x2f, 0xe6, 0x2a, 0xfe, 0x3e, 0x7f, 0xcd, 0xb3, 0x2d, 0xc2, 0x5b,
0xff, 0x88, 0xed, 0x62, 0xc9, 0xf7, 0xf6, 0xfc, 0xb6, 0x80, 0xbd, 0x78, 0x80, 0xd4, 0x70, 0xdf,
0x89, 0x13, 0xc2, 0x43, 0x15, 0x10, 0x00, 0xc3, 0xe3, 0x47, 0xff, 0xd2, 0xf2, 0x71, 0xd4, 0x34,
0x22, 0xf5, 0xc4, 0xec, 0x8d, 0x35, 0x94, 0x0e, 0x8b, 0xdf, 0xf1, 0x48, 0xd6, 0xb1, 0xc5, 0x77,
0xee, 0xd4, 0x81, 0x37, 0x53, 0xdb, 0xe1, 0xe8, 0x32, 0xd0, 0x48, 0x97, 0xf8, 0xf6, 0x2f, 0x28,
0x4c, 0xa1, 0xdf, 0xcf, 0x5e, 0xd9, 0x5e, 0xc3, 0x34, 0x39, 0xf0, 0xb5, 0xe9, 0x44, 0x6f, 0x8d,
0x1b, 0x44, 0x4c, 0xfe, 0xe3, 0xcf, 0x9c, 0x8d, 0xca, 0xb7, 0x9b, 0x85, 0xb2, 0xa9, 0x13, 0x0a,
0x29, 0x12, 0xde, 0xb5, 0xf6, 0x80, 0xc4, 0x7b, 0x8f, 0x84, 0xe0, 0xbe, 0x2e, 0x09, 0x3f, 0xe3,
0x8b, 0x51, 0x32, 0x66, 0x1c, 0x5d, 0xfa, 0xf8, 0xc1, 0x21, 0x7d, 0x41, 0xcf, 0xbc, 0x7b, 0xd4,
0x26, 0xe7, 0xd2, 0xda, 0x52, 0xdf, 0xf9, 0x6e, 0x26, 0x52, 0xb7, 0x97, 0x67, 0x02, 0xee, 0xda,
0x18, 0x28, 0xfd, 0x05, 0x37, 0xbe, 0x90, 0x3d, 0x7f, 0x8a, 0xbd, 0x28, 0xa7, 0xef, 0x76, 0x7e,
0xf7, 0xe7, 0xd2, 0xca, 0xf1, 0x02, 0x82, 0x01, 0x01, 0x00, 0xdd, 0x99, 0xb8, 0xf4, 0x67, 0x52,
0x0a, 0x32, 0x8f, 0x48, 0x9f, 0xd5, 0x25, 0x74, 0x46, 0x96, 0x28, 0x75, 0x7c, 0xce, 0xa2, 0x7c,
0xa7, 0x78, 0xd2, 0x14, 0x49, 0x02, 0x26, 0x78, 0xb8, 0x19, 0xd4, 0x3a, 0x92, 0x1d, 0xee, 0xf2,
0x13, 0x12, 0x85, 0x64, 0x35, 0x21, 0x97, 0xb2, 0xcf, 0xc0, 0xf1, 0x3d, 0x8a, 0x16, 0xed, 0x4e,
0xf3, 0xcb, 0x15, 0xc3, 0x84, 0x68, 0xa5, 0x45, 0xea, 0x48, 0x10, 0x82, 0xba, 0x9a, 0xc4, 0x58,
0xe0, 0xe9, 0x78, 0x61, 0x58, 0x13, 0xd4, 0x13, 0x37, 0x96, 0xdd, 0x03, 0x06, 0xc1, 0xeb, 0x86,
0xa6, 0x82, 0x22, 0x33, 0x18, 0x85, 0xb2, 0xa2, 0x8f, 0x36, 0x3b, 0xcb, 0x2b, 0xf2, 0x07, 0xd0,
0x5a, 0x81, 0x0f, 0x26, 0xeb, 0xed, 0x51, 0xc9, 0xbd, 0xbc, 0x03, 0x62, 0x74, 0x10, 0xb6, 0xda,
0x86, 0xfc, 0x6f, 0x12, 0x75, 0xe9, 0x43, 0x3f, 0x2e, 0x9a, 0x23, 0xc6, 0x9d, 0xc6, 0x31, 0x18,
0x41, 0x5a, 0x46, 0xf2, 0x76, 0x9a, 0x43, 0x99, 0x23, 0x61, 0xc0, 0x44, 0x62, 0xe2, 0xa2, 0xdf,
0x8e, 0x47, 0x30, 0xcb, 0xc2, 0x05, 0x6d, 0xb9, 0xb9, 0x51, 0xb8, 0xd8, 0xc9, 0x06, 0xab, 0xdd,
0x6d, 0x03, 0xbe, 0x01, 0x12, 0x01, 0x4e, 0x9d, 0x85, 0x1d, 0x22, 0x50, 0xda, 0xfa, 0x6b, 0x21,
0x04, 0xec, 0xaf, 0x5f, 0x76, 0xf4, 0xe6, 0x2c, 0x02, 0xf5, 0x41, 0xe2, 0x6f, 0xfb, 0x7f, 0xc3,
0x3a, 0x34, 0xde, 0xc8, 0x06, 0x61, 0x1c, 0xed, 0x2d, 0x66, 0x74, 0x13, 0xe1, 0x20, 0xd6, 0x83,
0xea, 0xe6, 0x83, 0xf7, 0xcb, 0xd1, 0xca, 0xe9, 0xfc, 0xcd, 0x21, 0xe9, 0x47, 0xdd, 0xaf, 0x17,
0x98, 0xb0, 0x5d, 0x9b, 0x8c, 0x3e, 0xd8, 0xe4, 0x11, 0xdd, 0x0c, 0xbc, 0x2f, 0xa1, 0x3a, 0x8f,
0x10, 0xcb, 0x24, 0xfd, 0x58, 0x8f, 0x6a, 0x52, 0xf8, 0xe1, 0x02, 0x82, 0x01, 0x00, 0x02, 0x50,
0xc4, 0xfa, 0x40, 0xe7, 0xc9, 0x14, 0x4c, 0x7c, 0x69, 0xcf, 0x2c, 0x6d, 0x34, 0x80, 0x42, 0x51,
0x70, 0xf4, 0x38, 0x60, 0xf8, 0xa0, 0x42, 0xfb, 0x47, 0x5d, 0x94, 0x52, 0xee, 0x38, 0x2d, 0x27,
0x5a, 0xd4, 0x63, 0x26, 0xff, 0xd1, 0xf4, 0x57, 0x1f, 0x47, 0x18, 0x26, 0xd8, 0xb8, 0xa6, 0x89,
0xbb, 0xb0, 0x52, 0x72, 0x63, 0x63, 0x48, 0xf5, 0x2c, 0xa2, 0x7b, 0x28, 0xb0, 0x29, 0x25, 0xd5,
0x8e, 0xd4, 0x99, 0x80, 0x64, 0xcb, 0x58, 0x22, 0x6d, 0xf7, 0x36, 0x5d, 0x69, 0x5e, 0x04, 0x9d,
0x8c, 0x85, 0x14, 0x35, 0x04, 0xd0, 0x92, 0x3b, 0xc9, 0xc2, 0x19, 0x1c, 0x20, 0x97, 0x48, 0xeb,
0x29, 0x25, 0xd6, 0xfd, 0x76, 0x1a, 0xcb, 0x6a, 0x33, 0x45, 0xcb, 0x51, 0x4a, 0x6f, 0xf5, 0xd1,
0xfc, 0x0a, 0xba, 0x11, 0x7d, 0x80, 0xde, 0x82, 0x24, 0xe8, 0xbc, 0x2b, 0x5e, 0x10, 0x4d, 0x95,
0x15, 0xba, 0x50, 0xab, 0xab, 0x84, 0x96, 0xf6, 0x08, 0x98, 0xd5, 0x9e, 0x50, 0xd7, 0x54, 0x3c,
0xc6, 0x87, 0x4d, 0x21, 0x93, 0x88, 0x43, 0x56, 0xd9, 0x6c, 0x39, 0x11, 0xb6, 0x97, 0xf1, 0x3b,
0x0c, 0x61, 0xff, 0xb7, 0x01, 0x13, 0xb1, 0x99, 0xd9, 0xde, 0x8b, 0x7c, 0xab, 0xe3, 0xa0, 0x82,
0x9d, 0x7a, 0x72, 0xda, 0x60, 0x9f, 0xfd, 0x29, 0x78, 0x2c, 0x41, 0xc8, 0xaa, 0x34, 0x28, 0xaf,
0x35, 0x79, 0x7c, 0xca, 0xe2, 0x23, 0xef, 0xe4, 0x92, 0x96, 0x2d, 0x74, 0x6c, 0x32, 0x12, 0xd6,
0xa2, 0xec, 0xbb, 0x13, 0xc4, 0xbf, 0x63, 0xcc, 0x4d, 0x8c, 0xfd, 0x21, 0x2d, 0x00, 0x22, 0xae,
0xed, 0x54, 0x21, 0xef, 0x2a, 0xda, 0x48, 0xd5, 0xda, 0x6e, 0xe6, 0x5c, 0xd9, 0x62, 0xd9, 0x45,
0xe7, 0xbf, 0xc1, 0xa2, 0xe0, 0xb3, 0x0f, 0xfc, 0xb1, 0x62, 0x4b, 0xea, 0xde, 0x11, 0x02, 0x82,
0x01, 0x01, 0x00, 0xa4, 0x5c, 0x9d, 0x4b, 0x61, 0xca, 0xfe, 0xd7, 0x4b, 0x61, 0x41, 0x73, 0x95,
0x89, 0x2d, 0xc5, 0xb8, 0x12, 0x94, 0x54, 0xab, 0x3e, 0x2b, 0xf5, 0x38, 0x54, 0x65, 0x66, 0x5b,
0xe4, 0x94, 0x20, 0x4c, 0x42, 0x79, 0x18, 0x0c, 0x9f, 0xae, 0x37, 0xc1, 0x8a, 0x76, 0xc2, 0x08,
0xc3, 0x4e, 0xc6, 0xbb, 0xe7, 0xba, 0x21, 0x91, 0x38, 0x4b, 0x28, 0xe9, 0x66, 0x90, 0x32, 0x11,
0xcb, 0xce, 0x9e, 0x4e, 0xe8, 0xb7, 0xc1, 0x8d, 0x3a, 0xa2, 0xef, 0x68, 0x23, 0x43, 0x71, 0xc9,
0x8d, 0xcb, 0x60, 0x71, 0x63, 0x0a, 0x43, 0x11, 0x0f, 0x59, 0x37, 0x12, 0x68, 0xb5, 0x9a, 0x8c,
0xc9, 0x77, 0xd1, 0x70, 0xfe, 0x1c, 0x05, 0x33, 0x78, 0x7d, 0x78, 0x56, 0x25, 0xb7, 0x3d, 0xd9,
0xb8, 0xf9, 0xaa, 0x97, 0x14, 0x12, 0x24, 0x47, 0x8b, 0xc4, 0x2d, 0x3d, 0xb1, 0x02, 0x95, 0xd6,
0x13, 0xe9, 0xdb, 0xd8, 0x07, 0x3c, 0x04, 0xc1, 0x6b, 0x4d, 0x25, 0xc9, 0x93, 0x93, 0x16, 0x8e,
0x66, 0xea, 0x50, 0x59, 0x8c, 0x1f, 0x90, 0x1b, 0xe0, 0x16, 0xa6, 0x84, 0xf1, 0xcc, 0x61, 0xbc,
0x65, 0xd1, 0xa7, 0x64, 0xa4, 0x1e, 0x4e, 0x7d, 0x71, 0x09, 0xa7, 0x89, 0xe9, 0x3f, 0x52, 0x8a,
0xdd, 0xd8, 0xda, 0xa8, 0x16, 0x32, 0xa5, 0x24, 0x8a, 0x64, 0x1d, 0xad, 0x61, 0xf0, 0x58, 0x6a,
0xd4, 0x60, 0x09, 0x4b, 0x29, 0xc9, 0x87, 0x4f, 0xd7, 0x1c, 0xb8, 0x14, 0x39, 0x66, 0x49, 0xe7,
0x6b, 0x9f, 0x8d, 0xeb, 0x30, 0xc7, 0x7d, 0x54, 0xbe, 0x99, 0x9f, 0x0a, 0x68, 0xe3, 0xdb, 0x22,
0x56, 0xf4, 0xf3, 0xad, 0x60, 0x5a, 0xb6, 0x79, 0x64, 0xd6, 0x12, 0x92, 0x0b, 0x8a, 0x35, 0x1f,
0x27, 0xe2, 0x7c, 0x03, 0x33, 0x1d, 0x5c, 0xc7, 0x93, 0x4f, 0x90, 0x6d, 0x4a, 0x1f, 0xc2, 0x97,
0xc9, 0x1c, 0xe1, 0x02, 0x82, 0x01, 0x01, 0x00, 0xbd, 0xce, 0xd4, 0x72, 0xa0, 0xe6, 0x7c, 0x12,
0xee, 0x9e, 0x81, 0x18, 0x25, 0x07, 0x9e, 0x43, 0xb5, 0x98, 0x08, 0xa8, 0x8d, 0x82, 0x8c, 0x2b,
0x43, 0xa1, 0x85, 0xe1, 0xf5, 0x03, 0x56, 0xd6, 0x9c, 0xbe, 0x3a, 0xc5, 0x04, 0x18, 0x78, 0x32,
0xd3, 0xbf, 0xdf, 0xfb, 0x03, 0xf4, 0x2d, 0x21, 0xd3, 0xef, 0x84, 0xfe, 0xa5, 0xeb, 0xe6, 0xa2,
0x37, 0x2c, 0xf6, 0xdb, 0x09, 0xaf, 0x51, 0x44, 0x05, 0x10, 0xa7, 0xaa, 0x41, 0xcb, 0x87, 0x95,
0xd1, 0x5a, 0xcc, 0x61, 0x0c, 0x66, 0x95, 0x65, 0x4c, 0x11, 0x61, 0x80, 0x9b, 0x73, 0xb2, 0x9d,
0x8e, 0xbe, 0xaf, 0x20, 0xb7, 0x6a, 0x2a, 0x46, 0x1b, 0x3f, 0xdc, 0x87, 0x1e, 0x9d, 0xbd, 0xa7,
0x07, 0x22, 0xab, 0xc4, 0xd0, 0x91, 0x9c, 0xc8, 0x02, 0x24, 0x1c, 0x68, 0xe3, 0x20, 0xc7, 0x03,
0x59, 0x12, 0xee, 0xe2, 0x88, 0xc8, 0x6c, 0xc7, 0x60, 0x19, 0xea, 0x5f, 0x56, 0x31, 0xca, 0x73,
0x1c, 0xee, 0x97, 0x2e, 0xbb, 0x3c, 0x44, 0x16, 0x47, 0xb6, 0x6d, 0x39, 0x06, 0xad, 0x1a, 0x27,
0x7a, 0x35, 0x70, 0x8c, 0x8f, 0x4b, 0x5e, 0x97, 0xf0, 0x82, 0x9a, 0xe0, 0x4b, 0x7e, 0x89, 0xb2,
0x4f, 0x61, 0xa6, 0x45, 0x25, 0x61, 0x06, 0xdd, 0x65, 0x1b, 0x7f, 0x9a, 0x50, 0xdc, 0xbd, 0x05,
0xf7, 0xd1, 0x4d, 0x84, 0x5a, 0x30, 0xcf, 0xcd, 0x63, 0x9e, 0x4a, 0x06, 0x03, 0x30, 0x1a, 0xea,
0x43, 0x2a, 0x35, 0xd9, 0xf4, 0xfe, 0x34, 0xec, 0xc5, 0x04, 0x15, 0x07, 0x7c, 0x1e, 0xa4, 0xcd,
0x2c, 0x76, 0x69, 0x96, 0x2a, 0xf8, 0xf2, 0x70, 0x55, 0x18, 0x66, 0xbe, 0x42, 0x28, 0xf8, 0x12,
0x51, 0x2a, 0xc8, 0xcc, 0x78, 0xce, 0x31, 0x0d, 0xb2, 0xb6, 0x2e, 0x9c, 0xf3, 0x48, 0xd9, 0x74,
0x2b, 0x53, 0xb3, 0x57, 0x57, 0x38, 0x83, 0x00 };
#else
    0x30, 0x82, 0x04, 0xbc, 0x02, 0x01, 0x00, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86,
    0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x01, 0x05, 0x00, 0x04, 0x82, 0x04,
    0xa6, 0x30, 0x82, 0x04, 0xa2, 0x02, 0x01, 0x00, 0x02, 0x82, 0x01, 0x01,
    0x00, 0xb8, 0xb5, 0x0f, 0x49, 0x46, 0xb5, 0x5d, 0x58, 0x04, 0x8e, 0x52,
    0x59, 0x39, 0xdf, 0xd6, 0x29, 0x45, 0x6b, 0x6c, 0x96, 0xbb, 0xab, 0xa5,
    0x6f, 0x72, 0x1b, 0x16, 0x96, 0x74, 0xd5, 0xf9, 0xb4, 0x41, 0xa3, 0x7c,
    0xe1, 0x94, 0x73, 0x4b, 0xa7, 0x23, 0xff, 0x61, 0xeb, 0xce, 0x5a, 0xe7,
    0x7f, 0xe3, 0x74, 0xe8, 0x52, 0x5b, 0xd6, 0x5d, 0x5c, 0xdc, 0x98, 0x49,
    0xfe, 0x51, 0xc2, 0x7e, 0x8f, 0x3b, 0x37, 0x5c, 0xb3, 0x11, 0xed, 0x85,
    0x91, 0x15, 0x92, 0x24, 0xd8, 0xf1, 0x7b, 0x3d, 0x2f, 0x8b, 0xcd, 0x1b,
    0x30, 0x14, 0xa3, 0x6b, 0x1b, 0x4d, 0x27, 0xff, 0x6a, 0x58, 0x84, 0x9e,
    0x79, 0x94, 0xca, 0x78, 0x64, 0x01, 0x33, 0xc3, 0x58, 0xfc, 0xd3, 0x83,
    0xeb, 0x2f, 0xab, 0x6f, 0x85, 0x5a, 0x38, 0x41, 0x3d, 0x73, 0x20, 0x1b,
    0x82, 0xbc, 0x7e, 0x76, 0xde, 0x5c, 0xfe, 0x42, 0xd6, 0x7b, 0x86, 0x4f,
    0x79, 0x78, 0x29, 0x82, 0x87, 0xa6, 0x24, 0x43, 0x39, 0x74, 0xfe, 0xf2,
    0x0c, 0x08, 0xbe, 0xfa, 0x1e, 0x0a, 0x48, 0x6f, 0x14, 0x86, 0xc5, 0xcd,
    0x9a, 0x98, 0x09, 0x2d, 0xf3, 0xf3, 0x5a, 0x7a, 0xa4, 0xe6, 0x8a, 0x2e,
    0x49, 0x8a, 0xde,
    0x73, 0xe9, 0x37, 0xa0, 0x5b, 0xef, 0xd0, 0xe0, 0x13, 0xac, 0x88, 0x5f,
    0x59, 0x47, 0x96, 0x7f, 0x78, 0x18, 0x0e, 0x44, 0x6a, 0x5d, 0xec,
    0x6e, 0xed, 0x4f, 0xf6, 0x6a, 0x7a, 0x58, 0x6b, 0xfe, 0x6c, 0x5a, 0xb9,
    0xd2, 0x22, 0x3a, 0x1f, 0xdf, 0xc3, 0x09, 0x3f, 0x6b, 0x2e, 0xf1, 0x6d,
    0xc3, 0xfb, 0x4e, 0xd4, 0xf2, 0xa3, 0x94, 0x13, 0xb0, 0xbf, 0x1e, 0x06,
    0x2e, 0x29, 0x55, 0x00, 0xaa, 0x98, 0xd9, 0xe8, 0x77, 0x84, 0x8b, 0x3f,
    0x5f, 0x5e, 0xf7, 0xf8, 0xa7, 0xe6, 0x02, 0xd2, 0x18, 0xb0, 0x52, 0xd0,
    0x37, 0x2e, 0x53, 0x02, 0x03, 0x01, 0x00, 0x01, 0x02, 0x82, 0x01, 0x00,
    0x0c, 0xdf, 0xd1, 0xe8, 0xf1, 0x9c, 0xc2, 0x9c, 0xd7, 0xf4, 0x73, 0x98,
    0xf4, 0x87, 0xbd, 0x8d, 0xb2, 0xe1, 0x01, 0xf8, 0x9f, 0xac, 0x1f, 0x23,
    0xdd, 0x78, 0x35, 0xe2, 0xd6, 0xd1, 0xf3, 0x4d, 0xb5, 0x25, 0x88, 0x16,
    0xd1, 0x1a, 0x18, 0x33, 0xd6, 0x36, 0x7e, 0xc4, 0xc8, 0xe5, 0x5d, 0x2d,
    0x74, 0xd5, 0x39, 0x3c, 0x44, 0x5a, 0x74, 0xb7, 0x7c, 0x48, 0xc1, 0x1f,
    0x90, 0xe3, 0x55, 0x9e, 0xf6, 0x29, 0xad, 0xb4, 0x6d, 0x93, 0x78, 0xb3,
    0xdc, 0x25, 0x0b, 0x9c, 0x73, 0x78, 0x7b, 0x93, 0x4c, 0xd3, 0x47, 0x09,
    0xda, 0xe6, 0x69, 0x18, 0xc6, 0x0f, 0xfb, 0xa5, 0x95, 0xf5, 0xe8, 0x75,
    0xe1, 0x01, 0x1b, 0xd3, 0x1c, 0xa2, 0x57, 0x03, 0x64, 0xdb, 0xf9, 0x5d,
    0xf3, 0x3c, 0xa7, 0xd1, 0x4b, 0xb0, 0x90, 0x1b, 0x90, 0x62, 0xb4, 0x88,
    0x30, 0x4b, 0x40, 0x4d, 0xcf, 0x7d, 0x89, 0x7a, 0xfb, 0x29, 0xc9, 0x64,
    0x34, 0x0a, 0x52, 0xf6, 0x70, 0x7c, 0x76, 0x5a, 0x2e, 0x8f, 0x50, 0xd4,
    0x92, 0x15, 0x97, 0xed, 0x4c, 0x2e, 0xf2, 0x3a, 0xd0, 0x58, 0x7e, 0xdb,
    0xf1, 0xf4, 0xdd, 0x07, 0x76, 0x04, 0xf0, 0x55, 0x8b, 0x72, 0x2b, 0xa7,
    0xa8, 0x78, 0x78, 0x67, 0xe6, 0xd8, 0xa5, 0xde, 0xe7, 0xc9, 0x1f, 0x5a,
    0xa0, 0x89, 0xc7, 0x24, 0xa2, 0x71, 0xb6, 0x7b, 0x3b, 0xe6, 0x92, 0x69,
    0x22, 0xaa, 0xe2, 0x47, 0x4b, 0x80, 0x3f, 0x6a, 0xab, 0xce, 0x4e, 0xcd,
    0xe8, 0x94, 0x6c, 0xf7, 0x84, 0x73, 0x85, 0xfd, 0x85, 0x1d, 0xae, 0x81,
    0xf7, 0xec, 0x12, 0x31, 0x7d, 0xc1, 0x99, 0xc0, 0x3c, 0x51, 0xb0, 0xdc,
    0xb0, 0xba, 0x9c, 0x84, 0xb8, 0x70, 0xc2, 0x09, 0x7f, 0x96, 0x3d, 0xa1,
    0xe2, 0x64, 0x27, 0x7a, 0x22, 0xb8, 0x75, 0xb9, 0xd1, 0x5f, 0xa5, 0x23,
    0xf9, 0x62, 0xe0, 0x41, 0x02, 0x81, 0x81, 0x00, 0xf4, 0xf3, 0x08, 0xcf,
    0x83, 0xb0, 0xab, 0xf2, 0x0f, 0x1a, 0x08, 0xaf, 0xc2, 0x42, 0x29, 0xa7,
    0x9c, 0x5e, 0x52, 0x19, 0x69, 0x8d, 0x5b, 0x52, 0x29, 0x9c, 0x06, 0x6a,
    0x5a, 0x32, 0x8f, 0x08, 0x45, 0x6c, 0x43, 0xb5, 0xac, 0xc3, 0xbb, 0x90,
    0x7b, 0xec, 0xbb, 0x5d, 0x71, 0x25, 0x82, 0xf8, 0x40, 0xbf, 0x38, 0x00,
    0x20, 0xf3, 0x8a, 0x38, 0x43, 0xde, 0x04, 0x41, 0x19, 0x5f, 0xeb, 0xb0,
    0x50, 0x59, 0x10, 0xe1, 0x54, 0x62, 0x5c, 0x93, 0xd9, 0xdc, 0x63, 0x24,
    0xd0, 0x17, 0x00, 0xc0, 0x44, 0x3e, 0xfc, 0xd1, 0xda, 0x4b, 0x24, 0xf7,
    0xcb, 0x16, 0x35, 0xe6, 0x9f, 0x67, 0x96, 0x5f, 0xb0, 0x94, 0xde, 0xfa,
    0xa1, 0xfd, 0x8c, 0x8a, 0xd1, 0x5c, 0x02, 0x8d, 0xe0, 0xa0, 0xa0, 0x02,
    0x1d, 0x56, 0xaf, 0x13, 0x3a, 0x65, 0x5e, 0x8e, 0xde, 0xd1, 0xa8, 0x28,
    0x8b, 0x71, 0xc9, 0x65, 0x02, 0x81, 0x81, 0x00, 0xc1, 0x0a, 0x47,
    0x39, 0x91, 0x06, 0x1e, 0xb9, 0x43, 0x7c, 0x9e, 0x97, 0xc5, 0x09, 0x08,
    0xbc, 0x22, 0x47, 0xe2, 0x96, 0x8e, 0x1c, 0x74, 0x80, 0x50, 0x6c, 0x9f,
    0xef, 0x2f, 0xe5, 0x06, 0x3e, 0x73, 0x66, 0x76, 0x02, 0xbd, 0x9a, 0x1c,
    0xfc, 0xf9, 0x6a, 0xb8, 0xf9, 0x36, 0x15, 0xb5, 0x20, 0x0b, 0x6b, 0x54,
    0x83, 0x9c, 0x86, 0xba, 0x13, 0xb7, 0x99, 0x54, 0xa0, 0x93, 0x0d, 0xd6,
    0x1e, 0xc1, 0x12, 0x72, 0x0d, 0xea, 0xb0, 0x14, 0x30, 0x70, 0x73, 0xef,
    0x6b, 0x4c, 0xae, 0xb6, 0xff, 0xd4, 0xbb, 0x89, 0xa1, 0xec, 0xca, 0xa6,
    0xe9, 0x95, 0x56, 0xac, 0xe2, 0x9b, 0x97, 0x2f, 0x2c, 0xdf, 0xa3, 0x6e,
    0x59, 0xff, 0xcd, 0x3c, 0x6f, 0x57, 0xcc, 0x6e, 0x44, 0xc4, 0x27, 0xbf,
    0xc3, 0xdd, 0x19, 0x9e, 0x81, 0x16, 0xe2, 0x8f, 0x65, 0x34, 0xa7, 0x0f,
    0x22, 0xba, 0xbf, 0x79, 0x57, 0x02, 0x81, 0x80, 0x2e, 0x21, 0x0e, 0xc9,
    0xb5, 0xad, 0x31, 0xd4, 0x76, 0x0f, 0x9b, 0x0f, 0x2e, 0x70, 0x33, 0x54,
    0x03, 0x58, 0xa7, 0xf1, 0x6d, 0x35, 0x57, 0xbb, 0x53, 0x66, 0xb4, 0xb6,
    0x96, 0xa1, 0xea, 0xd9, 0xcd, 0xe9, 0x23, 0x9f, 0x35, 0x17, 0xef, 0x5c,
    0xb8, 0x59, 0xce, 0xb7, 0x3c, 0x35, 0xaa, 0x42, 0x82, 0x3f, 0x00, 0x96,
    0xd5, 0x9d, 0xc7, 0xab, 0xec, 0xec, 0x04, 0xb5, 0x15, 0xc8, 0x40, 0xa4,
    0x85, 0x9d, 0x20, 0x56, 0xaf, 0x03, 0x8f, 0x17, 0xb0, 0xf1, 0x96, 0x22,
    0x3a, 0xa5, 0xfa, 0x58, 0x3b, 0x01, 0xf9, 0xae, 0xb3, 0x83, 0x6f, 0x44,
    0xd3, 0x14, 0x2d, 0xb6, 0x6e, 0xd2, 0x9d, 0x39, 0x0c, 0x12, 0x1d, 0x23,
    0xea, 0x19, 0xcb, 0xbb, 0xe0, 0xcd, 0x89, 0x15, 0x9a, 0xf5, 0xe4, 0xec,
    0x41, 0x06, 0x30, 0x16, 0x58, 0xea, 0xfa, 0x31, 0xc1, 0xb8, 0x8e, 0x08,
    0x84, 0xaa, 0x3b, 0x19, 0x02, 0x81, 0x80, 0x70, 0x4c, 0xf8, 0x6e, 0x86,
    0xed, 0xd6, 0x85, 0xd4, 0xba, 0xf4, 0xd0, 0x3a, 0x32, 0x2d, 0x40, 0xb5,
    0x78, 0xb8, 0x5a, 0xf9, 0xc5, 0x98, 0x08, 0xe5, 0xc0, 0xab, 0xb2, 0x4c,
    0x5c, 0xa2, 0x2b, 0x46, 0x9b, 0x3e, 0xe0, 0x0d, 0x49, 0x50, 0xbf, 0xe2,
    0xa1, 0xb1, 0x86, 0x59, 0x6e, 0x7b, 0x76, 0x6e, 0xee, 0x3b, 0xb6, 0x6d,
    0x22, 0xfb, 0xb1, 0x68, 0xc7, 0xec, 0xb1, 0x95, 0x9b, 0x21, 0x0b, 0xb7,
    0x2a, 0x71, 0xeb, 0xa2, 0xb2, 0x58, 0xac, 0x6d, 0x5f, 0x24, 0xd3, 0x79,
    0x42, 0xd2, 0xf7, 0x35, 0xdc, 0xfc, 0x0e, 0x95, 0x60, 0xb7, 0x85, 0x7f,
    0xf9, 0x72, 0x8e, 0x4a, 0x11, 0xc3, 0xc2, 0x09, 0x40, 0x5c, 0x7c, 0x43,
    0x12, 0x34, 0xac, 0x59, 0x99, 0x76, 0x34, 0xcf,
    0x20, 0x88, 0xb0, 0xfb, 0x39, 0x62, 0x3a, 0x9b, 0x03, 0xa6, 0x84, 0x2c,
    0x03, 0x5c, 0x0c, 0xca, 0x33, 0x85, 0xf5, 0x02, 0x81, 0x80, 0x56,
    0x99, 0xe9, 0x17, 0xdc, 0x33, 0xe1, 0x33, 0x8d, 0x5c, 0xba, 0x17, 0x32,
    0xb7, 0x8c, 0xbd, 0x4b, 0x7f, 0x42, 0x3a, 0x79, 0x90, 0xe3, 0x70,
    0xe3, 0x27, 0xce, 0x22, 0x59, 0x02, 0xc0, 0xb1, 0x0e, 0x57, 0xf5, 0xdf,
    0x07, 0xbf, 0xf8, 0x4e, 0x10, 0xef, 0x2a, 0x62, 0x30, 0x03, 0xd4,
    0x80, 0xcf, 0x20, 0x84, 0x25, 0x66, 0x3f, 0xc7, 0x4f, 0x56, 0x8c, 0x1e,
    0xe1, 0x18, 0x91, 0xc1, 0xfd, 0x71, 0x5f, 0x65, 0x9b, 0xe4, 0x4f,
    0xe0, 0x1a, 0x3a, 0xf8, 0xc1, 0x69, 0xdb, 0xd3, 0xbb, 0x8d, 0x91, 0xd1,
    0x11, 0x4f, 0x7e, 0x91, 0x1b, 0xb4, 0x27, 0xa5, 0xab, 0x7c, 0x7b,
    0x76, 0xd4, 0x78, 0xfe, 0x63, 0x44, 0x63, 0x7e, 0xe3, 0xa6, 0x60, 0x4f,
    0xb9, 0x55, 0x28, 0xba, 0xba, 0x83, 0x1a, 0x2d, 0x43, 0xd5, 0xf7,
    0x2e, 0xe0, 0xfc, 0xa8, 0x14, 0x9b, 0x91, 0x2a, 0x36, 0xbf, 0xc7, 0x14 };
#endif


#define BURN_TEST 1
#define SIGN_TEST 1
#define PEM_TEST 1
/*
    FUNCTION:        int main(int argc, char* argv[])
*/

int HsmTest(int argc, char* argv[])
{
    HSMLunaClient m_HSMLunaClient;
    if (m_HSMLunaClient.Init() == CK_FALSE) {
        cout << "Initialization  error" << endl;
        return -1;
    }
#ifdef PEM_TEST
    if (argc == 2) {
        vector<unsigned char> outputBuffer;
        Hex64Manipulations hex64;
        hex64.ParsePemFile(argv[1], outputBuffer);
    }
#endif

#ifdef BURN_TEST
    string pPrivateKeyLabel = "Super New RSA private Key2", pbPublicKeyLabel = "Super New RSA Public Key2";
    m_HSMLunaClient.BurnPrivateKey(pPrivateKeyLabel, pbPublicKeyLabel);
#endif
#ifdef SIGN_TEST
    vector<CK_BYTE> data(64,0);
    for (int i = 0; i < 64; i++) {
        data[i] = i + 1;
    }

    m_HSMLunaClient.RSA_CreateSignature(data, pPrivateKeyLabel);
#endif
    m_HSMLunaClient.CleanUp();
    return 0;
}
#endif
