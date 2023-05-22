all:
	# macro to NUM
	gcc -Wall -DNUM="2+2" macroValue.c -o a.out
	@./a.out
	# without macro NUM
	@echo "========"
	gcc -Wall macroValue.c -o a.out
	@./a.out
 # It is possible to see the declarations from the included header file by preprocessing the file with gcc -E
	@echo "========"
	gcc -Wall -E macroValue.c -o a.out
	@./a.out
