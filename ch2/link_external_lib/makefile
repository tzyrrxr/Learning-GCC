all:
	#@# link math package : -lm

	#@# This is error order to use -lm
	#@#lgcc -Wall -lm link_external_lib.c -o a.out

	#gcc -Wall -O3 link_external_lib.c -lm -o a.out
	#./a.out
	gcc -Wall -ansi -D_GUN_SOURCE main.c lib.c 
	#gcc -Wall main.c lib.c 
	#gcc -Wall main.c -o main.o
	#gcc -Wall lib.c -o lib.o

clean:
	@rm *.*~
	@rm *~
	@rm *.out
