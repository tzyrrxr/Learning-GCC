#include <stdio.h>

double power_ (double d, unsigned int n) {
 double ret = 1.0;
 unsigned int i = 0;
 for (i = 0; i<n; i++) ret *= d;
 //printf ("ret = %d\n", ret);
 return ret;
}

inline int* sq(int *i) {
	*i = (*i)*(*i);
	return i;
}

int err(int i) {
	int s;
	if (i>0) s =1;
	else if (i<0) s=-1;
	return s;
}


int main(void) {
 double sum = 0.0;
 unsigned int i = 0;
 //unsigned int *j = 4;

 for (i = 0; i <= 100000000; i++) {
  sum += power_ ((double)i, i%9);
  //printf("%f\n", sum);
 }
 printf("sum = %g\n", sum);

 i = err(i);
 printf("i : %d\n", i);

 //sq(j);

 return 0;
}
