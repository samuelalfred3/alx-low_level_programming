#!/bin/bash
wget -P .. https://raw.githubusercontent.com/samuelalfred3/alx-low_level_programming/main/0x18-dynamic_libraries/libwin.so
export LD_PRELOAD="$PWD/../linhack.so"
