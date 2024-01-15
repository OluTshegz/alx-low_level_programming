#!/bin/bash
wget -P /tmp/ https://github.com/OluTshegz/alx-low_level_programming/blob/master/0x18-dynamic_libraries/gm_win.so
export LD_PRELOAD=/tmp/gm_win.so