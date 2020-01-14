// Copyright 2013 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// ========================================================================
//
// CUP-ECDSA public keys consist of a byte array, 66 bytes long, containing:
// * The key ID (one byte)
// * The public key in X9.62 uncompressed encoding (65 bytes):
//     * Uncompressed header byte (0x04)
//     * Gx coordinate (256-bit integer, big-endian)
//     * Gy coordinate (256-bit integer, big-endian)
{0x01,
0x04,
0x0c, 0x39, 0x57, 0xb9, 0xca, 0x37, 0xac, 0xb8,
0xaa, 0xc7, 0x26, 0x10, 0xf5, 0xf1, 0x91, 0xc8,
0xa5, 0x48, 0xc1, 0xcb, 0xe8, 0x5b, 0xea, 0xc2,
0x1a, 0x9a, 0xb1, 0xcc, 0x71, 0x92, 0x22, 0x59,
0xcc, 0x35, 0x66, 0xe0, 0x94, 0x37, 0x73, 0x1c,
0xd1, 0xd4, 0xf7, 0xd9, 0xe4, 0xc8, 0x26, 0x02,
0xbf, 0xad, 0x90, 0xee, 0xa0, 0x23, 0xb3, 0x79,
0xff, 0xbb, 0xed, 0xda, 0xb6, 0xb1, 0xd5, 0x2e};
