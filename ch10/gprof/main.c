#include <stdio.h>

void loop1();
void loop2();
void prim(int max);

int main () {
	loop1 ();
	loop2 ();
	prim (100000);
}

void loop1(){
	for (int i=0; i<100; i++) {
		if (i/5 != 0) {
			i++;
		} else {
			i += 2;
		}
	}
	prim (100);
}
void loop2(){
	for (int i=0; i<100; i++){
		if (i/7 != 0) {
			i++;
			loop2();
		} else {
			i += 2;
		}
	}
	prim(88888);
}

void prim (int max) {
	for (int i=3; i<max; i++) {
		int j;
		for (j=2; j<i; j++) {
			if (i%j == 0) {
				j=i+1;
				break;
			}
		}
		if (j == i+1) {
			continue;
		}
		printf("prime: %d\n", i);
	}
}

