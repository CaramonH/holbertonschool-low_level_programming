#!/bin/bash
gcc -gc *.c
ar rc libmy.a *.o
ranlib libmy.a
