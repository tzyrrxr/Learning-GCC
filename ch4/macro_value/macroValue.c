#include <stdio.h>

int main(void) {
 #ifdef NUM
  printf("NUM is %d\n", 10 * NUM);
 #endif
 printf("Running\n");

 return 0;
}
