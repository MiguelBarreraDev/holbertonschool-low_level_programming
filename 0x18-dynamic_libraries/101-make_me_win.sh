#!/bin/bash
wget -O /tmp/libinject.so https://raw.github.com/MiguelBarreraDev/holbertonschool-low_level_programming/main/0x18-dynamic_libraries/libinject.so
export LD_PRELOAD=/tmp/libinject.so
