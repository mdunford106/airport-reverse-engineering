
## Phase 3.4 — Filesystem discovery

```text
========================================
 AIRPORT FILESYSTEM DISCOVERY
========================================
Tue Nov 24 21:22:19 MST 2026

===== SHARED DATA PRESERVATION =====

Bank: 0
Start: 0x00790000
End: 0x007E0000
Size: 327680
SHA256: 403ec1d311f11a853463983649b1ece997a04aedb7eb9fbc0c87a26e0644f237
Saved: preserved-data/flash0-shared-region.bin

Bank: 1
Start: 0x00790000
End: 0x007E0000
Size: 327680
SHA256: 403ec1d311f11a853463983649b1ece997a04aedb7eb9fbc0c87a26e0644f237
Saved: preserved-data/flash1-shared-region.bin

Shared regions identical: True

===== BANK 0: FILESYSTEM SCAN =====
Image size: 22652736
Image SHA256: 88204bdeaef30658c7e50d32d9dfc70e88c434940a56afdcdbace8e998f558bd

[FILESYSTEM CANDIDATE]
Type: UFS1 little-endian
Magic offset: 0x00563C3C
Superblock: 0x005636E0
Image base: 0x005616E0
Block size: 4096
Fragment size: 512
Candidate size: 16777216
SHA256: 82b8fb9c0af84fd3faa3fae4db0805fcf5bd815dc3894445ddeb8e2d12cbc252
Saved: filesystem-analysis/bank0-ffs-candidate-005616e0.bin

[FILESYSTEM CANDIDATE]
Type: UFS1 little-endian
Magic offset: 0x00563C3C
Superblock: 0x005636E0
Image base: 0x005536E0
Block size: 4096
Fragment size: 512
Candidate size: 16777216
SHA256: d91af1cd40910af3d8206d42589e7df397f582a9c9a421410d4dddc471aa1b5d
Saved: filesystem-analysis/bank0-ffs-candidate-005536e0.bin

[FILESYSTEM CANDIDATE]
Type: UFS1 little-endian
Magic offset: 0x00565C3C
Superblock: 0x005656E0
Image base: 0x005636E0
Block size: 4096
Fragment size: 512
Candidate size: 16777216
SHA256: 75b0d8fb7de4ba2d9970ef9c133910588a0604009af3b8522deb60a014842b6c
Saved: filesystem-analysis/bank0-ffs-candidate-005636e0.bin

[FILESYSTEM CANDIDATE]
Type: UFS1 little-endian
Magic offset: 0x00565C3C
Superblock: 0x005656E0
Image base: 0x005556E0
Block size: 4096
Fragment size: 512
Candidate size: 16777216
SHA256: 50b31c68330dd55fa48c388021bfd4daedd2cc5bc4cc2fa459185ca102cd9d8f
Saved: filesystem-analysis/bank0-ffs-candidate-005556e0.bin

UFS1 little-endian: 23 magic hits

UFS1 big-endian: 1 magic hits

UFS2 little-endian: 34 magic hits

UFS2 big-endian: 1 magic hits

Plausible candidates: 4

===== BANK 1: FILESYSTEM SCAN =====
Image size: 22652736
Image SHA256: daf950b241576ae06ce625ba852489b070f40c3ebbf71dc074d767ebd81dd4ba

[FILESYSTEM CANDIDATE]
Type: UFS1 little-endian
Magic offset: 0x00563C3C
Superblock: 0x005636E0
Image base: 0x005616E0
Block size: 4096
Fragment size: 512
Candidate size: 16777216
SHA256: 0e1c57867126e6fb988828e3addfa9e72899d503b953412d2edbefe4eeb189bd
Saved: filesystem-analysis/bank1-ffs-candidate-005616e0.bin

[FILESYSTEM CANDIDATE]
Type: UFS1 little-endian
Magic offset: 0x00563C3C
Superblock: 0x005636E0
Image base: 0x005536E0
Block size: 4096
Fragment size: 512
Candidate size: 16777216
SHA256: 8141d5feb1164c2728d66e3b329f29b14d549def803529976626b2ba96750623
Saved: filesystem-analysis/bank1-ffs-candidate-005536e0.bin

[FILESYSTEM CANDIDATE]
Type: UFS1 little-endian
Magic offset: 0x00565C3C
Superblock: 0x005656E0
Image base: 0x005636E0
Block size: 4096
Fragment size: 512
Candidate size: 16777216
SHA256: b0354b5e64803e371f15ede80d7cf60e07f87cf5b6d025bede9fe59405e49319
Saved: filesystem-analysis/bank1-ffs-candidate-005636e0.bin

[FILESYSTEM CANDIDATE]
Type: UFS1 little-endian
Magic offset: 0x00565C3C
Superblock: 0x005656E0
Image base: 0x005556E0
Block size: 4096
Fragment size: 512
Candidate size: 16777216
SHA256: 1bc83e7b4dcb3af0c6009e4c74bc63b6b07e54e83102c0118193d8c2c2fa4097
Saved: filesystem-analysis/bank1-ffs-candidate-005556e0.bin

UFS1 little-endian: 23 magic hits

UFS1 big-endian: 1 magic hits

UFS2 little-endian: 34 magic hits

UFS2 big-endian: 1 magic hits

Plausible candidates: 4

===== PRESERVED DATA ANALYSIS =====
preserved-data/flash0-shared-region.bin: data
00000000: 1f89 b217 4edf 9a0f e79f a728 dc90 2567  ....N......(..%g
00000010: 6698 8e9f 5b48 6773 c942 26cf 05ee 15b7  f...[Hgs.B&.....
00000020: ff13 c49d 3fea b837 9d36 2271 53ab c0aa  ....?..7.6"qS...
00000030: bd00 bb09 d8b0 74c5 ccf8 d438 d411 a2ee  ......t....8....
00000040: 70c7 08fc 1acd 0d33 2c54 62cc 9674 0cd0  p......3,Tb..t..
00000050: b626 1c70 2b45 94b4 88e0 7367 a2f9 b037  .&.p+E....sg...7
00000060: bc19 c177 dc25 b481 1a82 91d2 a508 5e13  ...w.%........^.
00000070: 28c9 62bd 51f3 8a55 bb54 f43d 3fe2 8f1b  (.b.Q..U.T.=?...
00000080: c690 afe1 4fbb ceb0 1bb9 039c 25a6 d2b5  ....O.......%...
00000090: 1f52 9a33 0b73 0768 7d33 e0a8 ea49 9265  .R.3.s.h}3...I.e
000000a0: a84f 3f14 9fdf a7dc 7e9f 7263 f365 0e15  .O?.....~.rc.e..
000000b0: 1698 b80d e307 d52d 2421 c52d a669 4186  .......-$!.-.iA.
000000c0: 614b c96f 1942 eecd 19c6 fb6c fe36 6897  aK.o.B.....l.6h.
000000d0: c0cd 340b b931 d560 1bdf 67be 025c ead0  ..4..1.`..g..\..
000000e0: d1c1 a7e0 cc79 31dc e55a 33ec d67d 8bdd  .....y1..Z3..}..
000000f0: 4ea9 1af2 ef3d 60b9 42a3 7897 c3ae 8554  N....=`.B.x....T
Analyzed 1 file for 85 file signatures (187 magic patterns) in 5.0 milliseconds

===== FILESYSTEM CANDIDATE ANALYSIS =====

Analyzing filesystem-analysis/bank0-ffs-candidate-005536e0.bin
filesystem-analysis/bank0-ffs-candidate-005536e0.bin: data

                                                   /Users/milesdunford/airport-research/firmware/filesystem-analysis/bank0-ffs-candidate-005536e0.bin
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
DECIMAL                            HEXADECIMAL                        DESCRIPTION
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
491520                             0x78000                            ELF binary, 32-bit executable, ARM for System-V (Unix), little endian
8503256                            0x81BFD8                           CRC32 polynomial table, little endian
8710200                            0x84E838                           CRC32 polynomial table, little endian
8753628                            0x8591DC                           Copyright text: "Copyright 2004-2010 Internet Systems Consortium."
8783952                            0x860850                           Copyright text: "Copyright 2004-2010 Internet Systems Consortium."
8830930                            0x86BFD2                           Copyright text: "Copyright (c) 2002-2008, Jouni Malinen <j@w1.fi> and contributors "
8894738                            0x87B912                           Copyright text: "Copyright (c) 2003-2008, Jouni Malinen <j@w1.fi> and contributors"
8896088                            0x87BE58                           Copyright text: "copyright notice, this list of conditions and the following disclaimer. 2. Redistributions in bi"
8896423                            0x87BFA7                           Copyright text: "copyright holder(s) nor the names of its contributors may be used to endorse or promote products "
8918348                            0x88154C                           gzip compressed data, operating system: Unix, timestamp: 1970-01-01 00:00:00, total size: 3742477 bytes
13497136                           0xCDF330                           Copyright text: "Copyright (c) 1996, 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009"
13504684                           0xCE10AC                           Copyright text: "Copyright (c) 1984 through 2008, William LeFebvre"
13616764                           0xCFC67C                           OpenSSL encryption, salt: 0x65645F5F00000000
13976484                           0xD543A4                           CRC32 polynomial table, little endian
14257400                           0xD98CF8                           CRC32 polynomial table, little endian
14502372                           0xDD49E4                           AES S-Box
14602451                           0xDED0D3                           Copyright text: "Copyright 1995-2005 Mark Adler "
14602751                           0xDED1FF                           Copyright text: "Copyright 1995-2005 Jean-loup Gailly "
14605652                           0xDEDD54                           CRC32 polynomial table, little endian
14609748                           0xDEED54                           CRC32 polynomial table, big endian
14692104                           0xE02F08                           SHA256 hash constants, little endian
14776176                           0xE17770                           Copyright text: "Copyright 1998 Apple Computer, Inc. All rights reserved. Apple and Mac OS are trademarks of Apple C"
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Analyzed 1 file for 85 file signatures (187 magic patterns) in 92.0 milliseconds

Analyzing filesystem-analysis/bank0-ffs-candidate-005556e0.bin
filesystem-analysis/bank0-ffs-candidate-005556e0.bin: data

                                                   /Users/milesdunford/airport-research/firmware/filesystem-analysis/bank0-ffs-candidate-005556e0.bin
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
DECIMAL                            HEXADECIMAL                        DESCRIPTION
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
483328                             0x76000                            ELF binary, 32-bit executable, ARM for System-V (Unix), little endian
8495064                            0x819FD8                           CRC32 polynomial table, little endian
8702008                            0x84C838                           CRC32 polynomial table, little endian
8745436                            0x8571DC                           Copyright text: "Copyright 2004-2010 Internet Systems Consortium."
8775760                            0x85E850                           Copyright text: "Copyright 2004-2010 Internet Systems Consortium."
8822738                            0x869FD2                           Copyright text: "Copyright (c) 2002-2008, Jouni Malinen <j@w1.fi> and contributors "
8886546                            0x879912                           Copyright text: "Copyright (c) 2003-2008, Jouni Malinen <j@w1.fi> and contributors"
8887896                            0x879E58                           Copyright text: "copyright notice, this list of conditions and the following disclaimer. 2. Redistributions in bi"
8888231                            0x879FA7                           Copyright text: "copyright holder(s) nor the names of its contributors may be used to endorse or promote products "
8910156                            0x87F54C                           gzip compressed data, operating system: Unix, timestamp: 1970-01-01 00:00:00, total size: 3742477 bytes
13488944                           0xCDD330                           Copyright text: "Copyright (c) 1996, 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009"
13496492                           0xCDF0AC                           Copyright text: "Copyright (c) 1984 through 2008, William LeFebvre"
13608572                           0xCFA67C                           OpenSSL encryption, salt: 0x65645F5F00000000
13968292                           0xD523A4                           CRC32 polynomial table, little endian
14249208                           0xD96CF8                           CRC32 polynomial table, little endian
14494180                           0xDD29E4                           AES S-Box
14594259                           0xDEB0D3                           Copyright text: "Copyright 1995-2005 Mark Adler "
14594559                           0xDEB1FF                           Copyright text: "Copyright 1995-2005 Jean-loup Gailly "
14597460                           0xDEBD54                           CRC32 polynomial table, little endian
14601556                           0xDECD54                           CRC32 polynomial table, big endian
14683912                           0xE00F08                           SHA256 hash constants, little endian
14767984                           0xE15770                           Copyright text: "Copyright 1998 Apple Computer, Inc. All rights reserved. Apple and Mac OS are trademarks of Apple C"
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Analyzed 1 file for 85 file signatures (187 magic patterns) in 91.0 milliseconds

Analyzing filesystem-analysis/bank0-ffs-candidate-005616e0.bin
filesystem-analysis/bank0-ffs-candidate-005616e0.bin: Unix Fast File system [v1] (little-endian), last mounted on , last written at Tue Apr 30 01:38:47 2019, clean flag 1, number of blocks 32768, number of data blocks 31135, number of cylinder groups 2, block size 4096, fragment size 512, minimum percentage of free blocks 0, rotational delay 0ms, disk rotational speed 60rps, SPACE optimization

                                                   /Users/milesdunford/airport-research/firmware/filesystem-analysis/bank0-ffs-candidate-005616e0.bin
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
DECIMAL                            HEXADECIMAL                        DESCRIPTION
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
434176                             0x6A000                            ELF binary, 32-bit executable, ARM for System-V (Unix), little endian
8445912                            0x80DFD8                           CRC32 polynomial table, little endian
8652856                            0x840838                           CRC32 polynomial table, little endian
8696284                            0x84B1DC                           Copyright text: "Copyright 2004-2010 Internet Systems Consortium."
8726608                            0x852850                           Copyright text: "Copyright 2004-2010 Internet Systems Consortium."
8773586                            0x85DFD2                           Copyright text: "Copyright (c) 2002-2008, Jouni Malinen <j@w1.fi> and contributors "
8837394                            0x86D912                           Copyright text: "Copyright (c) 2003-2008, Jouni Malinen <j@w1.fi> and contributors"
8838744                            0x86DE58                           Copyright text: "copyright notice, this list of conditions and the following disclaimer. 2. Redistributions in bi"
8839079                            0x86DFA7                           Copyright text: "copyright holder(s) nor the names of its contributors may be used to endorse or promote products "
8861004                            0x87354C                           gzip compressed data, operating system: Unix, timestamp: 1970-01-01 00:00:00, total size: 3742477 bytes
13439792                           0xCD1330                           Copyright text: "Copyright (c) 1996, 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009"
13447340                           0xCD30AC                           Copyright text: "Copyright (c) 1984 through 2008, William LeFebvre"
13559420                           0xCEE67C                           OpenSSL encryption, salt: 0x65645F5F00000000
13919140                           0xD463A4                           CRC32 polynomial table, little endian
14200056                           0xD8ACF8                           CRC32 polynomial table, little endian
14445028                           0xDC69E4                           AES S-Box
14545107                           0xDDF0D3                           Copyright text: "Copyright 1995-2005 Mark Adler "
14545407                           0xDDF1FF                           Copyright text: "Copyright 1995-2005 Jean-loup Gailly "
14548308                           0xDDFD54                           CRC32 polynomial table, little endian
14552404                           0xDE0D54                           CRC32 polynomial table, big endian
14634760                           0xDF4F08                           SHA256 hash constants, little endian
14718832                           0xE09770                           Copyright text: "Copyright 1998 Apple Computer, Inc. All rights reserved. Apple and Mac OS are trademarks of Apple C"
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Analyzed 1 file for 85 file signatures (187 magic patterns) in 92.0 milliseconds

Analyzing filesystem-analysis/bank0-ffs-candidate-005636e0.bin
filesystem-analysis/bank0-ffs-candidate-005636e0.bin: Unix Fast File system [v1] (little-endian), last mounted on , last written at Tue Apr 30 01:38:47 2019, clean flag 1, number of blocks 32768, number of data blocks 31135, number of cylinder groups 2, block size 4096, fragment size 512, minimum percentage of free blocks 0, rotational delay 0ms, disk rotational speed 60rps, SPACE optimization

                                                   /Users/milesdunford/airport-research/firmware/filesystem-analysis/bank0-ffs-candidate-005636e0.bin
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
DECIMAL                            HEXADECIMAL                        DESCRIPTION
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
425984                             0x68000                            ELF binary, 32-bit executable, ARM for System-V (Unix), little endian
8437720                            0x80BFD8                           CRC32 polynomial table, little endian
8644664                            0x83E838                           CRC32 polynomial table, little endian
8688092                            0x8491DC                           Copyright text: "Copyright 2004-2010 Internet Systems Consortium."
8718416                            0x850850                           Copyright text: "Copyright 2004-2010 Internet Systems Consortium."
8765394                            0x85BFD2                           Copyright text: "Copyright (c) 2002-2008, Jouni Malinen <j@w1.fi> and contributors "
8829202                            0x86B912                           Copyright text: "Copyright (c) 2003-2008, Jouni Malinen <j@w1.fi> and contributors"
8830552                            0x86BE58                           Copyright text: "copyright notice, this list of conditions and the following disclaimer. 2. Redistributions in bi"
8830887                            0x86BFA7                           Copyright text: "copyright holder(s) nor the names of its contributors may be used to endorse or promote products "
8852812                            0x87154C                           gzip compressed data, operating system: Unix, timestamp: 1970-01-01 00:00:00, total size: 3742477 bytes
13431600                           0xCCF330                           Copyright text: "Copyright (c) 1996, 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009"
13439148                           0xCD10AC                           Copyright text: "Copyright (c) 1984 through 2008, William LeFebvre"
13551228                           0xCEC67C                           OpenSSL encryption, salt: 0x65645F5F00000000
13910948                           0xD443A4                           CRC32 polynomial table, little endian
14191864                           0xD88CF8                           CRC32 polynomial table, little endian
14436836                           0xDC49E4                           AES S-Box
14536915                           0xDDD0D3                           Copyright text: "Copyright 1995-2005 Mark Adler "
14537215                           0xDDD1FF                           Copyright text: "Copyright 1995-2005 Jean-loup Gailly "
14540116                           0xDDDD54                           CRC32 polynomial table, little endian
14544212                           0xDDED54                           CRC32 polynomial table, big endian
14626568                           0xDF2F08                           SHA256 hash constants, little endian
14710640                           0xE07770                           Copyright text: "Copyright 1998 Apple Computer, Inc. All rights reserved. Apple and Mac OS are trademarks of Apple C"
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Analyzed 1 file for 85 file signatures (187 magic patterns) in 92.0 milliseconds

Analyzing filesystem-analysis/bank1-ffs-candidate-005536e0.bin
filesystem-analysis/bank1-ffs-candidate-005536e0.bin: data

                                                   /Users/milesdunford/airport-research/firmware/filesystem-analysis/bank1-ffs-candidate-005536e0.bin
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
DECIMAL                            HEXADECIMAL                        DESCRIPTION
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
491520                             0x78000                            ELF binary, 32-bit executable, ARM for System-V (Unix), little endian
8497972                            0x81AB34                           CRC32 polynomial table, little endian
8704880                            0x84D370                           CRC32 polynomial table, little endian
8748308                            0x857D14                           Copyright text: "Copyright 2004-2010 Internet Systems Consortium."
8778144                            0x85F1A0                           Copyright text: "Copyright 2004-2010 Internet Systems Consortium."
8825018                            0x86A8BA                           Copyright text: "Copyright (c) 2002-2008, Jouni Malinen <j@w1.fi> and contributors "
8888698                            0x87A17A                           Copyright text: "Copyright (c) 2003-2008, Jouni Malinen <j@w1.fi> and contributors"
8890048                            0x87A6C0                           Copyright text: "copyright notice, this list of conditions and the following disclaimer. 2. Redistributions in bi"
8890383                            0x87A80F                           Copyright text: "copyright holder(s) nor the names of its contributors may be used to endorse or promote products "
8912308                            0x87FDB4                           gzip compressed data, operating system: Unix, timestamp: 1970-01-01 00:00:00, total size: 3747101 bytes
13489108                           0xCDD3D4                           Copyright text: "Copyright (c) 1996, 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009"
13496652                           0xCDF14C                           Copyright text: "Copyright (c) 1984 through 2008, William LeFebvre"
13607824                           0xCFA390                           OpenSSL encryption, salt: 0x65645F5F00000000
13966744                           0xD51D98                           CRC32 polynomial table, little endian
14245040                           0xD95CB0                           CRC32 polynomial table, little endian
14483796                           0xDD0154                           AES S-Box
14579967                           0xDE78FF                           Copyright text: "Copyright 1995-2005 Mark Adler "
14580267                           0xDE7A2B                           Copyright text: "Copyright 1995-2005 Jean-loup Gailly "
14583168                           0xDE8580                           CRC32 polynomial table, little endian
14587264                           0xDE9580                           CRC32 polynomial table, big endian
14669344                           0xDFD620                           SHA256 hash constants, little endian
14753416                           0xE11E88                           Copyright text: "Copyright 1998 Apple Computer, Inc. All rights reserved. Apple and Mac OS are trademarks of Apple C"
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Analyzed 1 file for 85 file signatures (187 magic patterns) in 92.0 milliseconds

Analyzing filesystem-analysis/bank1-ffs-candidate-005556e0.bin
filesystem-analysis/bank1-ffs-candidate-005556e0.bin: data

                                                   /Users/milesdunford/airport-research/firmware/filesystem-analysis/bank1-ffs-candidate-005556e0.bin
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
DECIMAL                            HEXADECIMAL                        DESCRIPTION
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
483328                             0x76000                            ELF binary, 32-bit executable, ARM for System-V (Unix), little endian
8489780                            0x818B34                           CRC32 polynomial table, little endian
8696688                            0x84B370                           CRC32 polynomial table, little endian
8740116                            0x855D14                           Copyright text: "Copyright 2004-2010 Internet Systems Consortium."
8769952                            0x85D1A0                           Copyright text: "Copyright 2004-2010 Internet Systems Consortium."
8816826                            0x8688BA                           Copyright text: "Copyright (c) 2002-2008, Jouni Malinen <j@w1.fi> and contributors "
8880506                            0x87817A                           Copyright text: "Copyright (c) 2003-2008, Jouni Malinen <j@w1.fi> and contributors"
8881856                            0x8786C0                           Copyright text: "copyright notice, this list of conditions and the following disclaimer. 2. Redistributions in bi"
8882191                            0x87880F                           Copyright text: "copyright holder(s) nor the names of its contributors may be used to endorse or promote products "
8904116                            0x87DDB4                           gzip compressed data, operating system: Unix, timestamp: 1970-01-01 00:00:00, total size: 3747101 bytes
13480916                           0xCDB3D4                           Copyright text: "Copyright (c) 1996, 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009"
13488460                           0xCDD14C                           Copyright text: "Copyright (c) 1984 through 2008, William LeFebvre"
13599632                           0xCF8390                           OpenSSL encryption, salt: 0x65645F5F00000000
13958552                           0xD4FD98                           CRC32 polynomial table, little endian
14236848                           0xD93CB0                           CRC32 polynomial table, little endian
14475604                           0xDCE154                           AES S-Box
14571775                           0xDE58FF                           Copyright text: "Copyright 1995-2005 Mark Adler "
14572075                           0xDE5A2B                           Copyright text: "Copyright 1995-2005 Jean-loup Gailly "
14574976                           0xDE6580                           CRC32 polynomial table, little endian
14579072                           0xDE7580                           CRC32 polynomial table, big endian
14661152                           0xDFB620                           SHA256 hash constants, little endian
14745224                           0xE0FE88                           Copyright text: "Copyright 1998 Apple Computer, Inc. All rights reserved. Apple and Mac OS are trademarks of Apple C"
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Analyzed 1 file for 85 file signatures (187 magic patterns) in 91.0 milliseconds

Analyzing filesystem-analysis/bank1-ffs-candidate-005616e0.bin
filesystem-analysis/bank1-ffs-candidate-005616e0.bin: Unix Fast File system [v1] (little-endian), last mounted on , last written at Mon Apr 14 22:11:39 2014, clean flag 1, number of blocks 32768, number of data blocks 31135, number of cylinder groups 2, block size 4096, fragment size 512, minimum percentage of free blocks 0, rotational delay 0ms, disk rotational speed 60rps, SPACE optimization

                                                   /Users/milesdunford/airport-research/firmware/filesystem-analysis/bank1-ffs-candidate-005616e0.bin
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
DECIMAL                            HEXADECIMAL                        DESCRIPTION
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
434176                             0x6A000                            ELF binary, 32-bit executable, ARM for System-V (Unix), little endian
8440628                            0x80CB34                           CRC32 polynomial table, little endian
8647536                            0x83F370                           CRC32 polynomial table, little endian
8690964                            0x849D14                           Copyright text: "Copyright 2004-2010 Internet Systems Consortium."
8720800                            0x8511A0                           Copyright text: "Copyright 2004-2010 Internet Systems Consortium."
8767674                            0x85C8BA                           Copyright text: "Copyright (c) 2002-2008, Jouni Malinen <j@w1.fi> and contributors "
8831354                            0x86C17A                           Copyright text: "Copyright (c) 2003-2008, Jouni Malinen <j@w1.fi> and contributors"
8832704                            0x86C6C0                           Copyright text: "copyright notice, this list of conditions and the following disclaimer. 2. Redistributions in bi"
8833039                            0x86C80F                           Copyright text: "copyright holder(s) nor the names of its contributors may be used to endorse or promote products "
8854964                            0x871DB4                           gzip compressed data, operating system: Unix, timestamp: 1970-01-01 00:00:00, total size: 3747101 bytes
13431764                           0xCCF3D4                           Copyright text: "Copyright (c) 1996, 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009"
13439308                           0xCD114C                           Copyright text: "Copyright (c) 1984 through 2008, William LeFebvre"
13550480                           0xCEC390                           OpenSSL encryption, salt: 0x65645F5F00000000
13909400                           0xD43D98                           CRC32 polynomial table, little endian
14187696                           0xD87CB0                           CRC32 polynomial table, little endian
14426452                           0xDC2154                           AES S-Box
14522623                           0xDD98FF                           Copyright text: "Copyright 1995-2005 Mark Adler "
14522923                           0xDD9A2B                           Copyright text: "Copyright 1995-2005 Jean-loup Gailly "
14525824                           0xDDA580                           CRC32 polynomial table, little endian
14529920                           0xDDB580                           CRC32 polynomial table, big endian
14612000                           0xDEF620                           SHA256 hash constants, little endian
14696072                           0xE03E88                           Copyright text: "Copyright 1998 Apple Computer, Inc. All rights reserved. Apple and Mac OS are trademarks of Apple C"
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Analyzed 1 file for 85 file signatures (187 magic patterns) in 91.0 milliseconds

Analyzing filesystem-analysis/bank1-ffs-candidate-005636e0.bin
filesystem-analysis/bank1-ffs-candidate-005636e0.bin: Unix Fast File system [v1] (little-endian), last mounted on , last written at Mon Apr 14 22:11:39 2014, clean flag 1, number of blocks 32768, number of data blocks 31135, number of cylinder groups 2, block size 4096, fragment size 512, minimum percentage of free blocks 0, rotational delay 0ms, disk rotational speed 60rps, SPACE optimization

                                                   /Users/milesdunford/airport-research/firmware/filesystem-analysis/bank1-ffs-candidate-005636e0.bin
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
DECIMAL                            HEXADECIMAL                        DESCRIPTION
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
425984                             0x68000                            ELF binary, 32-bit executable, ARM for System-V (Unix), little endian
8432436                            0x80AB34                           CRC32 polynomial table, little endian
8639344                            0x83D370                           CRC32 polynomial table, little endian
8682772                            0x847D14                           Copyright text: "Copyright 2004-2010 Internet Systems Consortium."
8712608                            0x84F1A0                           Copyright text: "Copyright 2004-2010 Internet Systems Consortium."
8759482                            0x85A8BA                           Copyright text: "Copyright (c) 2002-2008, Jouni Malinen <j@w1.fi> and contributors "
8823162                            0x86A17A                           Copyright text: "Copyright (c) 2003-2008, Jouni Malinen <j@w1.fi> and contributors"
8824512                            0x86A6C0                           Copyright text: "copyright notice, this list of conditions and the following disclaimer. 2. Redistributions in bi"
8824847                            0x86A80F                           Copyright text: "copyright holder(s) nor the names of its contributors may be used to endorse or promote products "
8846772                            0x86FDB4                           gzip compressed data, operating system: Unix, timestamp: 1970-01-01 00:00:00, total size: 3747101 bytes
13423572                           0xCCD3D4                           Copyright text: "Copyright (c) 1996, 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009"
13431116                           0xCCF14C                           Copyright text: "Copyright (c) 1984 through 2008, William LeFebvre"
13542288                           0xCEA390                           OpenSSL encryption, salt: 0x65645F5F00000000
13901208                           0xD41D98                           CRC32 polynomial table, little endian
14179504                           0xD85CB0                           CRC32 polynomial table, little endian
14418260                           0xDC0154                           AES S-Box
14514431                           0xDD78FF                           Copyright text: "Copyright 1995-2005 Mark Adler "
14514731                           0xDD7A2B                           Copyright text: "Copyright 1995-2005 Jean-loup Gailly "
14517632                           0xDD8580                           CRC32 polynomial table, little endian
14521728                           0xDD9580                           CRC32 polynomial table, big endian
14603808                           0xDED620                           SHA256 hash constants, little endian
14687880                           0xE01E88                           Copyright text: "Copyright 1998 Apple Computer, Inc. All rights reserved. Apple and Mac OS are trademarks of Apple C"
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Analyzed 1 file for 85 file signatures (187 magic patterns) in 92.0 milliseconds

===== EXTRACTED FILES =====
filesystem-analysis/:
total 262224
-rw-------@ 1 milesdunford  staff    16M Nov 24 21:22 bank0-ffs-candidate-005536e0.bin
-rw-------@ 1 milesdunford  staff    16M Nov 24 21:22 bank0-ffs-candidate-005556e0.bin
-rw-------@ 1 milesdunford  staff    16M Nov 24 21:22 bank0-ffs-candidate-005616e0.bin
-rw-------@ 1 milesdunford  staff    16M Nov 24 21:22 bank0-ffs-candidate-005636e0.bin
-rw-------@ 1 milesdunford  staff    16M Nov 24 21:22 bank1-ffs-candidate-005536e0.bin
-rw-------@ 1 milesdunford  staff    16M Nov 24 21:22 bank1-ffs-candidate-005556e0.bin
-rw-------@ 1 milesdunford  staff    16M Nov 24 21:22 bank1-ffs-candidate-005616e0.bin
-rw-------@ 1 milesdunford  staff    16M Nov 24 21:22 bank1-ffs-candidate-005636e0.bin
-rw-------@ 1 milesdunford  staff    38K Nov 24 21:22 report-20261124-212219.txt

preserved-data/:
total 1280
-rw-------@ 1 milesdunford  staff   320K Nov 24 21:22 flash0-shared-region.bin
-rw-------@ 1 milesdunford  staff   320K Nov 24 21:22 flash1-shared-region.bin

========================================
 ANALYSIS COMPLETE
========================================
```

## Phase 3.5 — Filesystem validation

Date: 2026-11-24
- Bank 0, offset 005616e0: directory listing succeeded (1355 entries).
- Bank 0, offset 005636e0: directory listing succeeded (1 entries).
- Bank 1, offset 005616e0: directory listing succeeded (1354 entries).
- Bank 1, offset 005636e0: directory listing succeeded (1 entries).

## Phase 3.6 — Revised extraction

Date: 2026-11-24

### Troubleshooting

- Initial Bank 0 startup file extraction succeeded.
- Sleuth Kit istat failed on character device inode 1068.
- Reported invalid block address: 38400 (0x9600).
- Suspected special-device inode interpretation issue.
- Removed special-device block inspection.
- Replaced verbose inode output with directory inventory.
- Added ELF32 little-endian ARM validation.
- No changes made to physical device or source firmware.

### Results

#### Bank 0

```text
system-analysis/bank0/multicall.bin: ELF 32-bit LSB executable, ARM, EABI4 version 1 (SYSV), statically linked, for NetBSD 6.0, stripped
7a1e5fae541f8fd112d98f261b18eb3ac3ac1c8be02e3223660d5b1b7cc2e05b  system-analysis/bank0/multicall.bin
 10281308 system-analysis/bank0/multicall.bin
```

#### Bank 1

```text
system-analysis/bank1/multicall.bin: ELF 32-bit LSB executable, ARM, EABI4 version 1 (SYSV), statically linked, for NetBSD 6.0, stripped
3372d0a04afc23ba7d46a1db1f0a8b9c0aa3b1865070ef8d387e71fbe17b89b2  system-analysis/bank1/multicall.bin
 10258548 system-analysis/bank1/multicall.bin
```


## Phase 3.6 — Validated extraction results

Date: 2026-11-24

Status: COMPLETE

- Both multicall executables validated as ARM32 LE ELF.
- Both use ARM EABI4 and target NetBSD 6.0.
- Both are statically linked and stripped.
- Entry point: 0x00008180.
- Both contain 150 multicall directory entries.
- Bank 0 executable size: 10281308 bytes.
- Bank 1 executable size: 10258548 bytes.
- Executable size difference: 22760 bytes.

### SHA256

Bank 0:

7a1e5fae541f8fd112d98f261b18eb3ac3ac1c8be02e3223660d5b1b7cc2e05b

Bank 1:

3372d0a04afc23ba7d46a1db1f0a8b9c0aa3b1865070ef8d387e71fbe17b89b2

### Persistent flash discovery

- Bank 0 disklabel capacity: 5922 sectors.
- Bank 1 disklabel capacity: 2394 sectors.
- Sector size: 512 bytes.
- Stock startup logic can erase and reformat flash2.
- Secondary firmware boot deferred pending recovery planning.
- Preserve current persistent storage.

### Hardware interfaces

- Apple GPIO device: /dev/applgpio0
- Apple fan device: /dev/applfan0
- I2C device: /dev/iic0
- Watchdog: /dev/watchdog
- Ethernet management: esconfig and ether-port
- Temperature monitoring: sysTemperature
- Accelerometer management: accelctl
- GPIO mapping ioctl: MAP_OUT
- Stock tty01 getty configured for 115200 baud.
- Physical UART voltage and pinout remain unverified.

## Phase 3.7 — ARM ELF analysis

Method:

- Inspect ELF metadata using LLVM.
- Map hardware-related strings to virtual addresses.
- Compare multicall command inventories.
- Generate offline ARM disassembly.
- Prepare binaries for Ghidra import.

Analysis generated locally; interpretation pending.

No physical device or firmware modifications performed.


### Phase 3.7 — Validated results

Status: COMPLETE

- Both binaries are fixed-address ARM32 LE ELF executables.
- Image base: 0x00008000.
- Entry point: 0x00008180.
- Both contain four program headers and 18 section headers.
- No symbol tables or relocations were reported.
- Both multicall command inventories are identical.
- Both contain 32 matching hardware-related strings.
- Bank 0 disassembly: 1986313 lines.
- Bank 1 disassembly: 1985012 lines.

#### Primary firmware hardware string addresses

| Target | Virtual address |
|---|---|
| esconfig | 0x0079C9C8 |
| ether-port | 0x0079C9DC |
| accelctl | 0x0079CA18 |
| /dev/iic0 | 0x0080D38C |
| /dev/applgpio0 | 0x008436A4 |
| /dev/applfan0 | 0x008436CC |
| sysTemperature error | 0x008436E8 |
| MAP_OUT error | 0x00868E40 |
| BCM_LED_FUNC_MAP error | 0x0091D9A8 |

Additional hardware utilities identified:

- twiddle-gpio
- i2cctl
- envstat
- esctl
- drvctl
- wl

## Phase 3.8 — Hardware cross-references

Method:

- Locate hardware-related strings.
- Translate file offsets into ELF virtual addresses.
- Identify embedded string pointers.
- Index candidate ARM PC-relative literal loads.
- Extract targeted disassembly.
- Inspect candidate main routine at 0x000084D8.

Results pending manual validation.

All analysis remains offline and read-only with respect
to the physical AirPort device.


### Phase 3.8 — Cross-reference results

Status: COMPLETE

- Bank 0 indexed literal locations: 105026.
- Bank 1 indexed literal locations: 104997.
- Both banks yielded 40 candidate hardware LDR sites.
- Both banks yielded 40 targeted disassembly snippets.
- Multicall dispatcher identified at 0x000084D8.
- Dispatch instruction identified at 0x00008570.
- Candidate dispatch table entry size: 8 bytes.
- First word: command name pointer.
- Second word: function entry pointer.
- Bank 0 candidate table: 0x0079CC40.
- Bank 1 candidate table: 0x0079B7C0.

#### Hardware cross-reference candidates

| Interface | Bank 0 | Bank 1 |
|---|---|---|
| Fan | 0x00268098 | 0x00267EC4 |
| Temperature | 0x002681A8 | 0x00267FD4 |
| GPIO | 0x00267DFC | 0x00267C28 |
| GPIO manipulation | 0x00309CC0 | 0x003091A8 |
| MAP_OUT | 0x00309D64 | 0x0030924C |
| I2C | 0x001FFE3C | 0x001FFC68 |
| Ethernet | 0x001FC83C | 0x001FC668 |
| Watchdog | 0x002AA980 | 0x002AA380 |
| Switch LEDs | 0x0058A9F4 | 0x00589E58 |

These are reference sites, not verified function boundaries.

## Phase 3.9 — Multicall dispatch

Method:

- Parse ELF program and section headers.
- Translate virtual addresses into file offsets.
- Decode candidate eight-byte dispatch entries.
- Validate command name strings.
- Validate function pointers against executable sections.
- Identify ARM and Thumb pointer modes.
- Compare command tables between firmware generations.
- Generate candidate Ghidra function labels.

Results pending review.

No physical device or firmware modifications performed.


## Phase 3.9 — Validated results

Date: 2026-11-24

Status: COMPLETE

- Recovered 152 command names from each firmware bank.
- All recovered function pointers passed executable-section validation.
- Both dispatch tables terminated correctly.
- Both firmware generations expose identical command names.
- All recovered command pointers indicate ARM mode.
- Multiple command aliases share function entry addresses.
- The crunchprog entry reinforces the crunchgen architecture.

| Property | Bank 0 | Bank 1 |
|---|---|---|
| Dispatcher | 0x000084D8 | 0x000084D8 |
| Dispatch table | 0x0079CC40 | 0x0079B7C0 |
| Terminator | 0x0079D100 | 0x0079BC80 |
| Commands | 152 | 152 |

The complete command mapping is documented in COMMAND_MAP.md.

## Phase 3.10 — Ghidra preparation

Status: Scripts generated; import validation pending.

- Generate separate Java labeling scripts for each firmware bank.
- Consolidate aliases sharing an entry address.
- Preserve aliases in function comments.
- Generate a cross-firmware command address map.
- Prioritize GPIO, I2C, Ethernet and thermal analysis.
- No physical hardware or firmware modifications performed.


## Phase 3.10 — Validated results

Date: 2026-11-24

Status: COMPLETE

- 152 command names recovered per firmware bank.
- 140 unique command entry addresses per bank.
- 10 groups of commands sharing entry addresses.
- 45 command entry addresses unchanged.
- 107 command entry addresses changed.
- Both firmware generations expose identical command names.
- Java labeling scripts generated for both banks.
- COMMAND_MAP.md generated.
- Address changes do not independently prove logic changes.

### Troubleshooting

Ghidra installation detection incorrectly checked for
a Homebrew cask instead of a formula.

## Phase 3.11 — Ghidra initialization

Status: IN PROGRESS

Objectives:

- Import primary firmware multicall ELF.
- Validate ARM architecture and memory layout.
- Complete initial auto-analysis.
- Apply recovered command labels.
- Begin GPIO and thermal reverse engineering.

No modifications to physical hardware or firmware.


## Phase 3.11 — GPIO interface analysis

Date: 2026-11-24

### Ghidra validation

- Primary multicall ELF successfully imported.
- ARM disassembly and decompilation operational.
- Custom command labeling confirmed for twiddle-gpio.
- First Apple-specific GPIO userspace interface recovered.

### GPIO command

Function: cmd_twiddle_gpio
Address: 0x00309C2C
Device: /dev/applgpio0

| Property | Value |
|---|---|
| Open mode | 2 (likely O_RDWR) |
| Read size | 8 bytes |
| Write size | 8 bytes |
| MAP_OUT ioctl | 0xC0284700 |
| ioctl argument size | 40 bytes |
| Pin selector mask | 0xFF |
| Logical high | 0xFFFFFFFFFFFFFFFF |
| Logical low | 0x0000000000000000 |

### ioctl encoding

Using conventional NetBSD ioctl encoding:

- Direction: IOC_INOUT
- Argument size: 40 bytes
- Group: G (0x47)
- Command number: 0

Candidate definition:

    #define APPLGPIO_MAP_OUT \
        _IOWR('G', 0, struct applgpio_map)

### Candidate mapping structure

    struct applgpio_map {
        uint32_t pin;
        uint32_t unknown[9];
    };

The buffer is initialized to zero before assigning
the first word to the selected pin.

The actual kernel-side structure remains unverified.

### Candidate library function labels

| Address | Proposed name |
|---|---|
| 0x005E9760 | open |
| 0x005E94F8 | read |
| 0x005E93A0 | write |
| 0x005E9BC8 | close |
| 0x007928C8 | ioctl |
| 0x00792904 | __errno |
| 0x0078CF10 | memset |
| 0x0076CA54 | strtol |
| 0x0077476C | printf |
| 0x00765090 | puts |
| 0x00739280 | errx |
| 0x007743C4 | exit |

Names are inferred from usage and require validation.

### Outstanding questions

- Physical GPIO pin assignments.
- Kernel-side MAP_OUT implementation.
- Remaining ioctl structure fields.
- GPIO controller register addresses.
- GPIO polarity and direction.
- Fan and HDD power control assignments.

## Phase 3.12 — Fan and thermal analysis

Status: IN PROGRESS

Priority reference addresses:

- Fan controller: 0x00268098
- Temperature monitoring: 0x002681A8
- GPIO controller: 0x00267DFC
- ACPd entry: 0x00278A18

All research remains offline.
No physical GPIO operations performed.
No firmware modifications performed.


## Phase 3.12 — Local offline batch validation (2026-11-25)

Local Mac execution and Ghidra 12.2 headless launcher verified with OpenJDK 25.0.5.1.
Original GUI project `ghidra-projects/AirPort-J28` has lock files and was not opened,
copied, or modified by this batch. Fresh ELF imports use independent timestamped projects.

Input: `system-analysis/bank0/multicall.bin`
SHA-256: `7a1e5fae541f8fd112d98f261b18eb3ac3ac1c8be02e3223660d5b1b7cc2e05b`
(matches the prior extraction record).

### References versus function entries

The requested addresses are ARM instructions inside functions, not entry points.

| Subject | Reference instruction | Containing entry |
|---|---|---|
| Fan | `0x00268098` | `0x00268080` |
| Temperature | `0x002681a8` | `0x00268178` |
| GPIO status | `0x00267dfc` | `0x00267dec` |

Entries are supported by prologues in the existing full bank0 disassembly.
Literal pointers and device/error strings were independently checked against the ELF's PT_LOAD mappings.

### Fan helper

- Loads `/dev/applfan0` (string `0x008436cc`) and calls the candidate open wrapper `0x005e9760` with flags 0.
- Calls candidate ioctl wrapper `0x007928c8` with requests, in order:
  `0xc0145007`, `0xc0145004`, `0xc0145005`, `0xc0145006`, `0xc0145007`.
- These requests encode a 20-byte argument, group `P`, numbers 7/4/5/6 under the conventional NetBSD encoding; driver operation names are not yet established.
- Uses constant 100000 (`0x186a0`), accepts a special -1 input, and otherwise checks the unsigned expression input+1 against 256.
- Do not infer RPM, physical pin assignments, or the meaning of every argument word from these constants alone.

### Temperature helper

- Opens `/dev/sysmon` (string `0x008436dc`), not the fan device.
- Reference `0x002681a8` loads the diagnostic `sysTemperature: Unable to open %s`.
- Uses ioctl `0xc0204502` via `0x007928c8`; its encoded size is 32 bytes, group `E`, number 2.
- Tests returned fields and uses constants -273150000 and 100000 in its conversion path. Units and exact signed/truncation behavior need interpretation of the exported code and driver ABI.

### GPIO status helper

- Opens `/dev/applgpio0` with flags 0, requests an eight-byte read, and checks the returned byte count against 8.
- Extracts bit 6 of the returned value and passes it into an apparent higher-level serialization path (library semantics remain inferred).
- This is distinct from `cmd_twiddle_gpio` at `0x00309c2c`; it does not establish a physical pin's purpose or polarity.

### Boundaries and follow-up

All work is static analysis. No extracted firmware execution, physical-device access,
flash writes, or Git commits/pushes occurred. Existing uncommitted RESEARCH.md edits were preserved.
Library names remain candidates until their implementations/ABI are checked.
Next: inspect callers and kernel ioctl handlers to resolve fan request names, sensor units,
and the meaning of GPIO bit 6.

### Batch outcome and reproducibility

Ghidra completed initial analysis in 216 seconds. The final export completed successfully
(exit 0), producing C and instruction listings for all three requested containing functions
plus the existing GPIO command at `0x00309c2c`. GPIO required explicit function creation at
`0x00267dec`, whose prologue and body had already been disassembled; the script verifies that
this function contains the requested reference. No GUI project was used.

Observed incoming references: fan call at `0x00269678`, temperature call at `0x00274158`,
and a parameter reference to the GPIO helper at `0x00269374` (not a direct call).

Artifacts are in:
`/Users/milesdunford/Documents/Codex/2026-11-25/referenced-chatgpt-conversation-this-is-an/outputs/airport-batch/`

- `results/targets.txt`: containing functions, incoming references, success status.
- `results/*.c`, `results/*.asm.txt`: decompiler and instruction exports.
- `input-validation.json`: ELF-mapped reference checks and source hash.
- `scripts/AirportTargetExport.java`: reference-based exporter with explicit GPIO fallback.
- `run-batch.sh`: fresh timestamped project and result directory per future import.
- `headless-projects/Bank0-20261125-181559`: successfully analyzed independent project.
- `export-console.log`: final successful export log.

The initial restricted attempt could not initialize Ghidra's script cache. The approved
retry completed analysis/export, with ELF-note warnings and unrelated decompiler warnings.
Editing its shell launcher while that first successful analysis was running caused a shell
EOF error after Ghidra saved the project; the final direct export then completed with exit 0.
The revised reusable launcher passes `bash -n`; its timestamped output layout has not been
rerun through another full import. Avoid editing a launcher while it is running.

Fan decompilation confirms that all five ioctl return values are ignored. One argument
word is only assigned for inputs other than -1; the sentinel path needs driver validation.
The temperature return is narrowed to 16 bits. These are recovered behaviors, not a safe
hardware-control specification.


## Phase 3.13 — Offline kernel, thermal, and storage analysis

The evidence and reproduction tools for this phase are in `offline-analysis/`.

Analysis date: 2026-11-25. This pass extends the bank0 fan, temperature, and GPIO investigation into both kernels, the management callbacks, thermal policy, and disk power management. All operations were static analysis on local files. No extracted firmware was run, no device was contacted, and no flash or Git operation occurred.

### What is now established

- The fan interface is PWM control, not an RPM target interface. Its five-word payload and six request codes are decoded below.
- The temperature helper returns tenths of a degree Celsius, narrowed to 16 bits. Sensor fault sentinels can pass its validity checks.
- Logical GPIO 6 controls HDD power with active-low enable. Userspace exposes the input bit as `DiskHasSpunDown`; it is a power-state indicator, not a direct measurement of platter motion.
- Logical GPIO 7 is registered to the named fan tachometer interrupt routine. The eight-byte GPIO interface does not imply 64 ordinary pins: bit 63 is synthesized from a separate status register.
- The kernel runs a periodic thermal controller, including fan control, virtual temperature models, fault detection, and radio throttling. A one-shot fan setting is not a substitute for that policy.
- Bank0 adds PCIe suspend/resume coordination around HDD power gating. The corresponding bank1 registration directly uses the GPIO power callback.

### Provenance and method

The raw bank0 kernel SHA-256 is `88204bdeaef30658c7e50d32d9dfc70e88c434940a56afdcdbace8e998f558bd`; bank1 is `daf950b241576ae06ce625ba852489b070f40c3ebbf71dc074d767ebd81dd4ba`. The bank0 multicall hash remains `7a1e5fae541f8fd112d98f261b18eb3ac3ac1c8be02e3223660d5b1b7cc2e05b`.

Both raw kernels contain ARM32 ELF symbol metadata at file offset `0x497e9c`. Its load address, allocated sections, and data/BSS boundary support the mapping `virtual address = raw offset + 0x80100000`. Reconstructed **analysis-only** ELF wrappers retain every original payload byte and attach the recovered metadata. Missing non-allocated debug/comment sections are omitted, rather than invented. The wrappers are neither original boot files nor deployment artifacts.

Ghidra projects are isolated under this workspace's `work/` directory. The original GUI project was untouched. Function bodies are bounded using symbol sizes. Explicit unconditional branches to other named function entries are recorded as tail calls; `panic` is marked non-returning. Selected prototypes are analyst annotations, not recovered C declarations. These adjustments eliminate the earlier accidental inclusion of unrelated routines and literal pools in some exports.

The evidence includes C-like exports, bounded ARM instruction listings, literal values, symbol-backed data tables, input hashes, and validation results. Decompiler output still requires interpretation: completion alone is not proof that every inferred type or expression is correct.

### Device-to-driver connections

The UFS1 inodes and the kernel character-device table agree in **both** banks:

| Device | Inode | Encoded device | Major/minor | Kernel switch |
|---|---:|---|---|---|
| `/dev/applgpio0` | 1068 | `0x9600` | 150/0 | `applgpio_cdevsw` |
| `/dev/applfan0` | 1069 | `0xd300` | 211/0 | `applfan_cdevsw` |
| `/dev/sysmon` | 181 | `0x6500` | 101/0 | `sysmon_cdevsw` |

`applgpio_cdevsw` opens through `gpio_open`, which creates an eight-byte per-open mask and clones a descriptor using `gpio_fileops`. That file-operations table contains `gpio_read`, `gpio_write`, and `gpio_ioctl`. This resolves the earlier uncertainty about whether the generic-looking GPIO handler belongs to the Apple device.

Evidence: `reports/device-driver-links.json`, `reports/data-tables.json`, and the `gpio_open` export. Sleuth Kit reports device-number words as invalid data-block addresses for the two Apple nodes; the raw inode fields and matching switch-table entries were checked independently.

### Fan ABI and behavior

Bank0 userspace helper: `0x00268080`; reference: `0x00268098`.
Kernel handler: `applfanpwm_ioctl`, `0x80128da0` in both banks.

| Byte offset | Recovered field |
|---:|---|
| 0 | channel index |
| 4 | polarity/inversion selection |
| 8 | period in nanoseconds |
| 12 | duty interval in nanoseconds |
| 16 | enable flag |

| Request | Recovered operation | Relevant payload field |
|---|---|---|
| `0x40045003` | Return channel count, 4 | separate 4-byte output |
| `0xc0145004` | Set polarity | offset 4 |
| `0xc0145005` | Set period | offset 8 |
| `0xc0145006` | Set duty interval | offset 12 |
| `0xc0145007` | Disable/enable | offset 16 |
| `0xc0145008` | Read channel configuration | all five words |

Operation names in the report and header are analyst-assigned. The binary establishes their behavior; original Apple header spellings were not recovered.

For an ordinary input `x` in 0–255, userspace prepares channel 0, polarity 1, period 100,000 ns, and duty `floor(x * 100000 / 255)` ns. It disables, sets polarity, sets period, sets duty, and enables. That period corresponds to 10 kHz. The driver converts nanoseconds using a stored 1 MHz tick rate, so the effective duty resolution is coarser than 256 distinct settings at a 100-tick period.

The helper accepts `-1` as a special case but skips initializing the duty word before using the payload. It ignores all five ioctl return values. An out-of-range ordinary input returns after opening the descriptor without the normal close path. These are recovered control-flow observations, not an endorsed control sequence.

The kernel thermal path instead calls `Force_Fan_Init` / `Force_Fan_Duty_Cycle`. Its stored `applfan_pwm_period` starts at 200 ticks and becomes 100 for board revision 12. Do not conflate that path with the userspace helper's fixed 100,000 ns request. The driver's `Fan_dcy` sensor reports `Forced_Fan_Duty_Cycle`, not a tachometer measurement.

### Temperature, sensors, and error representation

Bank0 userspace helper `0x00268178` opens `/dev/sysmon` and uses `0xc0204502`. The kernel's `sysmonioctl_envsys` implements this legacy envsys request. Its 32-byte layout is:

`sensor, current, minimum, maximum, average, warning_flags, valid_flags, units` — eight 32-bit words.

The helper scans sensor indices until it finds a valid sensor with units 0. It does **not** select by a sensor description. For a nonzero current value, its conversion is:

`wire_value = trunc_toward_zero((microkelvin - 273150000) / 100000) & 0xffff`

Its caller at `0x00274140` returns two bytes. Registration identifies the management property as `tmpC`. A value of zero also represents several failure/absence paths, so zero alone does not distinguish 0°C from an unsuccessful reading. This helper checks the sensor-valid bit, not all data-validity conditions.

The local `emc141x_refresh` code independently confirms microkelvin scaling. NetBSD's documented envsys ABI provides corroboration for the field/flag names and temperature units: [legacy envsys interface](https://man.netbsd.org/NetBSD-3.1/envsys.4), [sensor API](https://man.netbsd.org/sysmon_envsys.9). Those documents describe upstream interfaces, not Apple's entire modified driver.

The firmware includes an EMC1413/EMC1414-compatible driver with four channels named `T_internal`, `T_external1`, `T_external2`, and `T_external3`. Its register tables are:

| Channel | High-temperature register | Fractional register |
|---:|---|---|
| 0 | `0x00` | `0x29` |
| 1 | `0x01` | `0x10` |
| 2 | `0x23` | `0x24` |
| 3 | `0x2a` | `0x2b` |

Successful reads form `high * 1000000 + 273150000 + ((low * 1000000) >> 8)`. The implemented error paths use 145150000 (−128°C) and 148150000 (−125°C), while setting the sensor state to the same valid-state value used for ordinary readings. The thermal controller separately treats temperature values below 273150000 as bad samples. The userspace `tmpC` path does not perform that same rejection.

The Apple fan driver's `T_hdd` refresh path supplies a fixed 273150000 (0°C) placeholder. This path is not evidence of a real HDD temperature measurement; other firmware temperature paths have not all been excluded. I2C match addresses are candidates accepted by the driver, not confirmation of the populated chip's physical address.

### GPIO and disk power

`GPIO_map_output_pin` accepts logical pins 0–23. `gpio_ioctl` request `0xc0284700` maps the selected output and adds it to the descriptor's output mask. `gpio_write` combines that mask with supplied data; this explains why `twiddle-gpio` writes an eight-byte all-ones value for logical high.

`GPIO_hdd_powerctl` changes bit 6 at GPIO output-register offset `0x64`: argument zero sets bit 6 and prints “down”; nonzero clears bit 6 and prints “up”. `GPIO_Setup` configures pin 6 as an output and initially clears it. Userspace helper `0x00267dec` reads GPIO bit 6 and serializes it under the inline constant string `DiskHasSpunDown`, registered as property `dSpn`.

`GPIO_Setup` registers logical pin 7 with `GPIO_FanTachISR`. The tach code uses a 100-entry timestamp ring; the RPM routine checks sample age and span and computes a value using `3000000 / elapsed_milliseconds`. Pulses per physical revolution have not been validated.

`GPIO_read` returns a low 32-bit GPIO input register at offset `0x60` and synthesizes bit 63 from bit 1 of a separate register at offset `0x22050`. The USB overcurrent timer tests that high/sign bit. Logical bit numbering here is **not** a connector pinout or an electrical-voltage specification.

### Thermal policy

The named `cltmthread` initializes sensor and virtual-temperature records, runs six fan loops and six radio loops, and periodically repeats them. Static defaults include `Ts = 10`, `g_disabled = 0`, `g_override_fan = -1`, and `min_fan_duty_cycle = 57`. These are firmware defaults, not observed live settings.

Fan demand is the maximum of the fan-loop outputs and the minimum-duty floor. Radio output is the minimum of the corresponding radio-loop outputs. Bad-sensor, bad-fan, or over-temperature state forces fan demand to 255. A nonnegative configured fan override is applied **after** that fault substitution. The disabled flag suppresses the regular fan write. This ordering matters when interpreting management settings.

Bad and good sample counters use a greater-than-three threshold. Fan plausibility checks compare measured RPM to 10–50 times the last duty setting; repeated failures set the bad-fan flag. The code can adjust the minimum fan setting downward when its RPM/duty conditions are met. The gain tables, filtering, and virtual-temperature models remain in the exports; they have not been validated against real sensor behavior.

Management callbacks recovered in bank0:

| Property | Behavior |
|---|---|
| `fDCY` | Four-byte setter calls the PWM helper |
| `RPMs` | Four-byte setter copies its input and returns success; no RPM-control action in this callback |
| `dSpn` | Returns `DiskHasSpunDown` from GPIO bit 6 |
| `tmpC` | Returns the two-byte temperature-helper result |
| `TMEn` | Getter/setter invert the `kern.cltm.disabled` value |
| `CLTM` | Getter builds thermal statistics; a `reset_stats` setter uses `kern.cltm.reset_stats` |

This documents registered callbacks, not authorization rules or a tested remote-control protocol.

### Cross-bank storage change

Bank0's `bcm53xx_device_register` marks `bcmpax` unit 2 as `pmf-enabled` and places `bcm53xx_pax2_power_gate` in the `powergating` property for `wd0`. On power-down that wrapper invokes PCIe power management before the HDD GPIO routine; on power-up it raises HDD power first and then resumes PCIe. Bank1 registers `GPIO_hdd_powerctl` directly.

Five named functions are present only in bank0's recovered table: `bcm53xx_pax2_power_gate`, `bcmpax_power_gate`, `bcmpax_suspend`, `bcmpax_resume`, and `bcmpax_configure`. This supports a real storage-power-management change, not merely shifted addresses. It does not prove how either version behaves on this particular physical device.

### Code-derived board register map

`bcm53xx_bootstrap` maps a 2 MiB I/O region at physical `0x18000000` and a separate 1 MiB ARM-core region at `0x19000000`. The CCB attach code uses a subregion beginning at offset zero of the I/O mapping and iterates 44-byte locator records. The compiled table contains 23 candidates; it is not evidence that every candidate is populated or attached.

| Compiled locator | Derived physical base | Size |
|---|---|---|
| `applfan` / `bcmpwm` | `0x18002000` | `0x1000` |
| `applgpio` CCB attachment | `0x18001000` | `0x1000` |
| `bcmi2c` | `0x18009000` | `0x1000` |
| `bcmqspi` | `0x18029000` | `0x1000` |
| `bcmpax` units 0/1/2 | `0x18012000` / `0x18013000` / `0x18014000` | `0x1000` each |
| `bcmusb` | `0x18021000` | `0x2000` |

The GPIO routines discussed above use the CCA parent I/O handle: their input, output, and output-enable accesses are offsets `0x60`, `0x64`, and `0x68` from `0x18000000`. Do not confuse the separate `applgpio` CCB attachment window with these CCA register offsets. The synthetic GPIO bit 63 comes from register `0x18022050`, within the compiled USB window.

`reports/board-map.json` retains all entries and raw interrupt metadata. These addresses follow the firmware's mapping code; no MMIO reads or writes were performed. A Linux device-tree description still requires checking the target kernel's bindings and actual board population.

### Artifacts and validation

- `recovered_abi.h`: analysis-only structures and named request constants; compiled with static size assertions.
- `scripts/decode_abi.py`: offline payload decoders and arithmetic checks. All 256 ordinary fan settings and representative temperature/sentinel values were checked.
- `bank0/`, `bank1/`: 99 and 94 successful C-like exports respectively, with bounded ARM instruction listings. All 193 exports passed completion and listing-bound checks.
- `userspace/`: seven additional management/registration exports.
- `reports/`: input provenance, literal resolutions, device links, global function inventory, branch candidates, comparison evidence, and validation results.
- `run-offline.sh`: timestamped, isolated reconstruction/import/export pipeline. Its end-to-end run completed successfully with the core target set; the latest additions are checked separately by the same export validator.

Global symbol-bounded comparison found 4,897 identical-byte entries, 6,950 differing-byte entries, and five bank0-only entries. Duplicate names are paired by ascending address, so this inventory is a navigation aid rather than a semantic equivalence proof. Of 99 selected named entries, 93 match after normalizing decompiler address/literal references, one common registration function differs, and five exist only in bank0; the raw and normalized evidence are both retained. Branch-encoding candidates are not automatically promoted to confirmed code cross-references.

### Remaining limits

No bootability, timing, interrupt delivery, fan response, board revision, actual sensor population, connector mapping, or electrical characteristic has been measured. Further offline work remains possible on full boot initialization, flash layout/recovery, Ethernet and wireless integration, calibration data, and complete management-protocol behavior. This pass substantially resolves the fan/temperature/GPIO questions; it does not finish an OpenWrt port or certify a hardware-control implementation.
