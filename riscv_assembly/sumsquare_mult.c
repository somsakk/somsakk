// sumsquare_mult.c
#include <stdio.h>

int mult(int x, int y) {
  return x * y;
}

int sumsquare(int x, int y) {
  return mult(x,x) + y;
}

int main(void) {
  int a = 3, b = 5;
  int c = sumsquare(a,b);
  int d = sumsquare(b,a);
  printf("c = %d, d = %d, c + d = %d\n", c, d, c + d); 
}
