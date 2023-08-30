// sum3_ex_prototype.c
#include <stdio.h>

// Prototypes
int sum3(int, int, int); // needed because sum3 is called before declared
// You should later try to comment out the above line. What would happen?

int main(void) {
  int a;
  a = sum3(6, 7, 8);
  printf("answer = %d\n", a);
}
 
// prototype not needed if this function were placed before main
int sum3(int a, int b, int c) {
  return a + b + c;
}