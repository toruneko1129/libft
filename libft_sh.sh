#!/bin/bash

if [ $# -ne 1 ]; then
	echo "enter an argument on the command line"
	echo "e.g. ./libft_sh.sh memset"
	exit 1
fi

if [ $1 = Makefile ]; then
	make
	make clean
	nm libft.a
	Norminette *.c *.h
fi

if [ $1 = isalpha ]; then
	gcc -c test_$1.c
	gcc test_$1.o libft.a
	rm test_$1.o
	./a.out 65
	./a.out 70
	./a.out 90
	./a.out 97
	./a.out 100
	./a.out 122
	./a.out 0
	./a.out 312
	./a.out -45
	./a.out -452
	./a.out 2147483647
	./a.out -2147483648
	echo "Test finished"
fi
