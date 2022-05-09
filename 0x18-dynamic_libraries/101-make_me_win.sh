#!/bin/bash
wget -P .. https://raw.githubusercontent.com/EugeneMadzaga/holbertonschool-low_level_programming/blob/18d5f3f6b52d5920363af01cf89b5925976e93e1/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD/../libgiga.so"
