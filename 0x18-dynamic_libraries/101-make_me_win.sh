#!/bin/bash
wget -P .. https://github.com/EugeneMadzaga/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/libdynamic.so
export LD_PRELOAD="$PWD/../libdynamic.so"
