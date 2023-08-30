// factorial.c
// David_Harris@hmc.edu 22 October 2019
#include <stdio.h>

int fact(int n) {
  if (n <= 1) {
    return 1;
  } 
  else {
    return n*fact(n-1);
  }
}

int main(void) {
  int a = 4;
  int result;
  result = fact(a);
  printf("factorial of %d is %d\n", a, result);
}
