#!/bin/bash
gcc -shared -o mil.so -fPIC Gigamil.c
export LD_PRELOAD=./mil.so:$LD_LIBRARY_PATH
