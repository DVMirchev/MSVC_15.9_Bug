# MSVC_15.9_Bug
Possible Bug in MSVC 15.9, toolset version: 14.16.27023

# Steps to reproduce:

1. Open solutiono with MSVC 15.9, toolset v141, 14.16.27023
2. Build in debug
3. Run and it crashes

# Result of calling: cl /Bv
Microsoft (R) C/C++ Optimizing Compiler Version 19.16.27023.1 for x86
Copyright (C) Microsoft Corporation.  All rights reserved.

Compiler Passes:
 C:\Program Files (x86)\Microsoft Visual Studio\2017\Professional\VC\Tools\MSVC\14.16.27023\bin\HostX86\x86\cl.exe:        Version 19.16.27023.1
 
 C:\Program Files (x86)\Microsoft Visual Studio\2017\Professional\VC\Tools\MSVC\14.16.27023\bin\HostX86\x86\c1.dll:        Version 19.16.27023.1
 
 C:\Program Files (x86)\Microsoft Visual Studio\2017\Professional\VC\Tools\MSVC\14.16.27023\bin\HostX86\x86\c1xx.dll:      Version 19.16.27023.1
 
 C:\Program Files (x86)\Microsoft Visual Studio\2017\Professional\VC\Tools\MSVC\14.16.27023\bin\HostX86\x86\c2.dll:        Version 19.16.27023.1
 
 C:\Program Files (x86)\Microsoft Visual Studio\2017\Professional\VC\Tools\MSVC\14.16.27023\bin\HostX86\x86\link.exe:      Version 14.16.27023.1
 
 C:\Program Files (x86)\Microsoft Visual Studio\2017\Professional\VC\Tools\MSVC\14.16.27023\bin\HostX86\x86\mspdb140.dll:  Version 14.16.27023.1
 
 C:\Program Files (x86)\Microsoft Visual Studio\2017\Professional\VC\Tools\MSVC\14.16.27023\bin\HostX86\x86\1033\clui.dll: Version 19.16.27023.1

cl : Command line error D8003 : missing source filename
