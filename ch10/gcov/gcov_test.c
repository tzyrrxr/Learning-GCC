#include <stdio.h>

int main() {
	for (int i=0; i<10; i++) 
		if (i % 3 == 0)
			puts("3");
		else if (i % 11 ==0)
			puts("11");
	return 0;
}
