/*############################################################################
  # Copyright 2016 Intel Corporation
  #
  # Licensed under the Apache License, Version 2.0 (the "License");
  # you may not use this file except in compliance with the License.
  # You may obtain a copy of the License at
  #
  #     http://www.apache.org/licenses/LICENSE-2.0
  #
  # Unless required by applicable law or agreed to in writing, software
  # distributed under the License is distributed on an "AS IS" BASIS,
  # WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  # See the License for the specific language governing permissions and
  # limitations under the License.
  ############################################################################*/
/*!
 * \file
 * \brief Test data for revoked privrl.
 *
 * Type    : Intel(R) EPID 1.1 Signature
 * Group   : grpX
 * Signer  : privrevoked->member001
 * HashAlg : Sha256
 * Message : "test message"
 * Basename: "basename1"
 * SigRl   : groupx empty sigrl
 */
 //unsigned char sig_sha256_bsn0_msg0_revkey000_dat[] = {
  0x09, 0x0d, 0x6f, 0x82, 0x77, 0x88, 0x49, 0x53,
  0xba, 0x1e, 0x1b, 0x0e, 0x5e, 0xae, 0xc0, 0x27, 0xad, 0xe3, 0xb1, 0x09,
  0x4f, 0xcd, 0xb6, 0xe6, 0x6f, 0x7f, 0xa3, 0x1a, 0x1e, 0xfb, 0x52, 0x72,
  0xfa, 0x85, 0x0f, 0x5c, 0x97, 0x61, 0xbf, 0x46, 0x7e, 0xec, 0xd6, 0x64,
  0xda, 0xa9, 0x8e, 0xf5, 0xd3, 0xdf, 0xfa, 0x13, 0x5a, 0xb2, 0x3e, 0xeb,
  0x0a, 0x9d, 0x02, 0xc0, 0x33, 0xec, 0x2a, 0x70, 0x26, 0xbb, 0xb1, 0x25,
  0x06, 0xa9, 0xaf, 0xff, 0x35, 0xc2, 0xb5, 0x36, 0x4b, 0xbd, 0x36, 0xc3,
  0x64, 0x50, 0x9a, 0x59, 0xf6, 0x50, 0x84, 0x70, 0xfd, 0xcd, 0xfb, 0x13,
  0x9a, 0x07, 0x32, 0x7b, 0xc7, 0x7c, 0xff, 0x33, 0x99, 0x8e, 0xb1, 0x86,
  0x45, 0xb6, 0xea, 0xc2, 0x90, 0x33, 0xdc, 0x1e, 0x63, 0x26, 0x26, 0xe1,
  0xe4, 0x57, 0x3d, 0x9c, 0x61, 0x3a, 0x50, 0x14, 0x3d, 0xbb, 0x22, 0x9b,
  0x00, 0xfc, 0x22, 0xec, 0x97, 0xe9, 0x65, 0xdd, 0x83, 0x81, 0xf3, 0xf2,
  0x21, 0x66, 0x73, 0xa3, 0x5a, 0x43, 0x9c, 0x0e, 0x00, 0x19, 0x89, 0x3b,
  0x0a, 0xad, 0xa1, 0xa8, 0xad, 0x86, 0x5c, 0xc2, 0x07, 0xd3, 0x9c, 0xa0,
  0xa7, 0x08, 0xb0, 0x5e, 0x01, 0xe2, 0xf9, 0xcc, 0x55, 0x3c, 0x13, 0x40,
  0x8c, 0x8f, 0x9f, 0x2d, 0x6d, 0xb0, 0x94, 0x5c, 0x7b, 0xb3, 0x2d, 0xea,
  0x12, 0xd4, 0x3f, 0x84, 0x03, 0x6d, 0x19, 0xbc, 0x4d, 0x29, 0x44, 0x8d,
  0xa5, 0x5c, 0xc2, 0x5e, 0x20, 0x1f, 0x1f, 0xdd, 0x1d, 0x02, 0x96, 0x4c,
  0x23, 0xa1, 0xe0, 0xe6, 0x66, 0x67, 0x41, 0x2f, 0xcb, 0xb7, 0x61, 0x60,
  0x05, 0xa9, 0x80, 0x8a, 0xd0, 0x7b, 0x4e, 0xb4, 0xc0, 0xdd, 0xf4, 0xd7,
  0xd1, 0x6d, 0x7f, 0xab, 0x50, 0xbf, 0xbc, 0x9b, 0x68, 0xf3, 0x4b, 0xd9,
  0xee, 0x25, 0x4e, 0x32, 0x93, 0xc2, 0x3d, 0x2d, 0x2e, 0xa8, 0xc8, 0x40,
  0xc6, 0xca, 0xa4, 0xb4, 0xf2, 0xb9, 0xc8, 0x76, 0xb0, 0x48, 0x71, 0xe3,
  0xf7, 0x2d, 0x55, 0x0b, 0xdb, 0x17, 0xc6, 0x15, 0x07, 0x96, 0x45, 0x65,
  0x4e, 0xd8, 0xb1, 0x08, 0xc4, 0xd6, 0x6b, 0x40, 0x1f, 0x6d, 0xb9, 0xc0,
  0x35, 0x31, 0x00, 0x00, 0x2b, 0x55, 0xb4, 0x60, 0x26, 0x2c, 0x5d, 0xab,
  0xf3, 0x66, 0x09, 0x2d, 0x33, 0xd6, 0x74, 0x34, 0x39, 0xba, 0x76, 0xfc,
  0xc3, 0xfd, 0x10, 0x3a, 0x72, 0x30, 0x53, 0x8d, 0x8b, 0x82, 0x00, 0x00,
  0x50, 0x41, 0x2f, 0x3f, 0x08, 0x27, 0x68, 0x63, 0x02, 0xdd, 0xb1, 0x1b,
  0x42, 0xd2, 0x2d, 0x26, 0x97, 0xa3, 0x13, 0x04, 0xe3, 0x6e, 0x8b, 0x19,
  0x5a, 0x14, 0xf9, 0x0d, 0xa2, 0x67, 0x00, 0xd0, 0x38, 0x85, 0x83, 0xf7,
  0x0b, 0x26, 0x97, 0x66, 0x91, 0x20, 0xbb, 0x27, 0x22, 0xaa, 0x6e, 0x6b,
  0x36, 0x1a, 0xa6, 0x1e, 0x0a, 0xb2, 0x83, 0x37, 0xf8, 0xea, 0xc2, 0x6c,
  0x35, 0xa5, 0x71, 0xfd, 0xec, 0x97, 0x69, 0x28, 0xa0, 0x22, 0xcd, 0x4a,
  0x2f, 0x7b, 0x64, 0x48, 0x5c, 0xfe, 0x6d, 0xdc, 0x71, 0x2d, 0x1e, 0x66,
  0xea, 0x89, 0x9f, 0x52, 0x0c, 0xc4, 0x48, 0x91, 0x7e, 0xae, 0x02, 0xbf,
  0x92, 0xe7, 0xa5, 0xcb, 0x38, 0xe7, 0xe1, 0x2a, 0xc2, 0x00, 0x00, 0x11,
  0x06, 0xe4, 0x48, 0x68, 0xe7, 0xe1, 0x35, 0x4c, 0xd5, 0x21, 0x1f, 0x47,
  0x3f, 0x1f, 0x60, 0xd3, 0x54, 0x8f, 0x5c, 0xf6, 0xba, 0x39, 0xaa, 0x3e,
  0x25, 0x83, 0x9c, 0xd2, 0xbe, 0x00, 0x00, 0x60, 0xda, 0xd4, 0xae, 0x6b,
  0xb3, 0x48, 0xbc, 0x59, 0x10, 0x01, 0x25, 0xe5, 0xe1, 0x8f, 0x24, 0x3f,
  0x32, 0x34, 0x29, 0x73, 0x42, 0x22, 0x6f, 0xa4, 0x32, 0x47, 0x8d, 0xde,
  0x82, 0x00, 0x00, 0x35, 0x27, 0x8b, 0xfb, 0x4d, 0x69, 0x4d, 0xb0, 0xcb,
  0xf0, 0x02, 0x19, 0xde, 0xe1, 0x64, 0x82, 0x66, 0xd6, 0x44, 0x51, 0x7c,
  0x25, 0x95, 0xf7, 0x6c, 0x1a, 0x68, 0xd9, 0xbf, 0x77, 0x00, 0x00, 0x66,
  0x94, 0x58, 0x4c, 0x22, 0x52, 0x46, 0xa5, 0x8c, 0x26, 0x13, 0xa1, 0xdd,
  0x3e, 0x2b, 0xd1, 0x81, 0x09, 0x64, 0xb9, 0xc3, 0x1a, 0x2e, 0xb7, 0xc6,
  0xee, 0xbc, 0x28, 0xc9, 0xef, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00
//};
//unsigned int sig_sha256_bsn0_msg0_revkey000_dat_len = 573;
