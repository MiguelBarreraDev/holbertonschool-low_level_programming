#!/bin/bash
wget -O /tmp/libinject.so https://github.com/MiguelBarreraDev/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/libinject.so
export LD_PRELOAD=/tmp/libinject.so
