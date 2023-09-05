// func_prototype.c
// Prototypes needed for f1 and/or f2 because they
// can’t both be declared before each other
#include <stdio.h>
int f1(int);
int f2(int);

int f1(int n) {
  if (n == 1) {
    return 1;
  }
  return f2(n-1) + 1;
}

int f2(int n) {
  if (n == 1) {
    return 1;
  }
  return f1(n-1) * 2;
}

void main(void) {
  printf("Answer = %d\n", f1(5));
}