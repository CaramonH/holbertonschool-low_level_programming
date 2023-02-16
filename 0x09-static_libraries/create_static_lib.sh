#!/bin/bash
gcc -gc *.c
ar rc liball.a *.o
ranlib liball.a
