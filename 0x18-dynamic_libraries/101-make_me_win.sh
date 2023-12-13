#!/bin/bash
wget -P /tmp https://github.com/AntoonAdel/alx-low_level_programming/raw/main/0x18-dynamic_libraries/lib_giga.so
export LD_PRELOAD=/tmp/lib_giga.so