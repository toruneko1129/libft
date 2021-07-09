#!/bin/bash

if [ $# -ne 1 ]; then
	echo "enter an argument on the command line"
	echo "e.g. ./libft_sh.sh memset"
	exit 1
fi

if [ $1 = make ]; then
	make
	make clean
	nm libft.a
	Norminette *.c libft.h
	exit 0
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
	./a.out 48
	./a.out 52
	./a.out 57
	./a.out 0
	./a.out 127
	./a.out 32
	./a.out 126
	./a.out 312
	./a.out -45
	./a.out -452
	./a.out 2147483647
	./a.out -2147483648
	echo "Test finished"
	exit 0
fi

if [ $1 = isdigit ]; then
	gcc -c test_$1.c
	gcc test_$1.o libft.a
	rm test_$1.o
	./a.out 65
	./a.out 70
	./a.out 90
	./a.out 97
	./a.out 100
	./a.out 122
	./a.out 48
	./a.out 52
	./a.out 57
	./a.out 0
	./a.out 127
	./a.out 32
	./a.out 126
	./a.out 312
	./a.out -45
	./a.out -452
	./a.out 2147483647
	./a.out -2147483648
	echo "Test finished"
	exit 0
fi

if [ $1 = isalnum ]; then
	gcc -c test_$1.c
	gcc test_$1.o libft.a
	rm test_$1.o
	./a.out 65
	./a.out 70
	./a.out 90
	./a.out 97
	./a.out 100
	./a.out 122
	./a.out 48
	./a.out 52
	./a.out 57
	./a.out 0
	./a.out 127
	./a.out 32
	./a.out 126
	./a.out 312
	./a.out -45
	./a.out -452
	./a.out 2147483647
	./a.out -2147483648
	echo "Test finished"
	exit 0
fi

if [ $1 = isascii ]; then
	gcc -c test_$1.c
	gcc test_$1.o libft.a
	rm test_$1.o
	./a.out 65
	./a.out 70
	./a.out 90
	./a.out 97
	./a.out 100
	./a.out 122
	./a.out 48
	./a.out 52
	./a.out 57
	./a.out 0
	./a.out 127
	./a.out 32
	./a.out 126
	./a.out 312
	./a.out -45
	./a.out -452
	./a.out 2147483647
	./a.out -2147483648
	echo "Test finished"
	exit 0
fi

if [ $1 = isprint ]; then
	gcc -c test_$1.c
	gcc test_$1.o libft.a
	rm test_$1.o
	./a.out 65
	./a.out 70
	./a.out 90
	./a.out 97
	./a.out 100
	./a.out 122
	./a.out 48
	./a.out 52
	./a.out 57
	./a.out 0
	./a.out 127
	./a.out 32
	./a.out 126
	./a.out 312
	./a.out -45
	./a.out -452
	./a.out 2147483647
	./a.out -2147483648
	echo "Test finished"
	exit 0
fi

if [ $1 = strlen ]; then
	gcc -c test_$1.c
	gcc test_$1.o libft.a
	rm test_$1.o
	./a.out ""
	./a.out a
	./a.out hogehoge
	./a.out 2wfg34@rg3r
	./a.out "fwe fwe	fwe"
	echo "Test finished"
	exit 0
fi

if [ $1 = memset ]; then
	gcc -c test_$1.c
	gcc test_$1.o libft.a
	rm test_$1.o
	echo "Test finished"
	exit 0
fi
