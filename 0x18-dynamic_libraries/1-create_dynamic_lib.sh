#!/bin/bash
gcc -c *.c
gcc -shared -fPIC *.o -o liball.so
