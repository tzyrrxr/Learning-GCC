#include <stdio.h>

double power_ (double d, unsigned int n) {
 double ret = 1.0;
 unsigned int i = 0;
 for (i = 0; i<n; i++) ret *= d;
 //printf ("ret = %d\n", ret);
 return ret;
}


int main(void) {
 double sum = 0.0;
 unsigned int i = 0;

 for (i = 0; i <= 100000000000; i++) {
  sum += power_ ((double)i, i%9);
  //printf("%f\n", sum);
 }
 printf("sum = %g\n", sum);

 return 0;
}
