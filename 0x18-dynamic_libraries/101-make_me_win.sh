#!/bin/bash
wget -P ..https://github.com/kezialegodi/alx-low_level_programming.git/main/0x18-dynamic_libraries/libdynamic.so
export LD_PRELOAD="$PWD/../libdynamic.so"
