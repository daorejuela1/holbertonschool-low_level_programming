#!/bin/bash
wget https://github.com/daorejuela1/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/unrandom.so
export LD_PRELOAD=unrandom.so
