#!/bin/bash
wget -P .. https://github.com/EugeneMadzaga/holbertonschool-low_level_programming/blob/e13deecbe00c7211c5aa8c79542ee18344baa811/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD libgiga"
