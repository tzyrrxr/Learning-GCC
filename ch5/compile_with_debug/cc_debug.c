#include <stdio.h>

int error_fun (int *p);

int main(void) {
 int *p = 0;

 return error_fun (p);
}

int error_fun (int *p) {
 int ret = *p;
 return ret;
}
