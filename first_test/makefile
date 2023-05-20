test:
	@# if -o is mitted, the output is written to a default file called 'a.out'.
	@# The option 'Wall' turns on all the most commonly-used compiler warnings.
	@# Recommanded that you always used 'Wall' option.
	gcc -Wall hello_world.c hello_fun.c -o hello
	@# Create object file sample
	gcc -Wall -c hello_world.c hello_fun.c
	@# link all object files.
	gcc -Wall hello_world.o hello_fun.o -o hello
	@echo "**RESULT**"
	./hello
