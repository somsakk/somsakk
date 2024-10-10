// assembly_ex3.c
#include <stdio.h>
#include <stdint.h>

typedef int mytype;

mytype foo(mytype a, mytype b, mytype c) {
  mytype x = a + b - c;
  return x;
}

int main(void) {
  mytype a;
  // call foo with constants as arguments
  a = foo(63,-2,10);
  printf("%d, %d\n", a, a+1); 

  // call foo with array elements as arguments
  // mytype ar[] = {1,2,3};
  // a = foo(ar[0], ar[1], ar[2]);
  // ar[0] = a + 1;
  // printf("%d, %d\n", a, ar[0]); 
}
