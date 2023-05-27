all:
	gcc -Wall -c hello.c
	gcc -Wall -c bye.c
	ar cr libhello.a hello.o bye.o
	gcc -Wall -L main.c -lhello -o hello

