// sum3_ex_v2.c
#include <stdio.h>

int sum3(int a, int b, int c) {
  int sum; 
  a = a + b;
  sum = a + c;
  return sum;
}

int main(void) {
  int a, b;
  a = sum3(2, 5, 8);
  printf("answer = %d\n", a); // what is printed out?
  b = sum3(a, -1, -2);
  printf("a = %d, b = %d\n", a, b); // what is printed out?
}