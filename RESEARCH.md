
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
