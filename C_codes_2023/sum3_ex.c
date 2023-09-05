// sum3_ex.c
#include <stdio.h>

int sum3(int a, int b, int c) {
  int sum = a + b + c;
  return sum;
}

int main(void) {
  int a;
  a = sum3(6, 7, 8);
  printf("answer = %d\n", a); // what is printed out?
}