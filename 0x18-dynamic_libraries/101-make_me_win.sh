#!/bin/bash
wget -P /tmp/ https://raw.githubusercontent.com/OluTshegz/alx-low_level_programming/master/0x18-dynamic_libraries/gm_win.so
export LD_PRELOAD=/tmp/gm_win.so