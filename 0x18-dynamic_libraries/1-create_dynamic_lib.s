#!/bin/bash
gcc -Wall -c *.c -fpic
gcc -shared *.o -o liball.so
