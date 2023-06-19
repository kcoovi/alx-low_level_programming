#!/bin/bash
wget -P https://github.com/kcoovi/alx-low_level_programming/raw/master/0x18-dynamic_libraries/win.so
export LD_PRELOAD=$(pwd)/win.so
