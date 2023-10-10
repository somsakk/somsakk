// assembly_ex1.c
#include <stdio.h>

// calculate the addition and subtraction of the inputs
int foo(int a, int b, int c) {
  int x = a + b - c;
  return x;
}

int main(void) {
  int a, b;
  a = foo(6, 7, 8);
  b = foo(a,1,2);
//   a = 6 + 7 - 8;
//   b = a + 1 - 2;
  printf("a = %d, b = %d\n", a, b); 
}