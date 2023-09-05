// factorial2.c
#include <stdio.h>

int fact_recursive(int n) {
  int ans;
  if (n <= 1) {
    ans = 1;
  } 
  else {
    ans = n*fact_recursive(n-1);
  }
  return ans;
}

int fact_iterative(int n) {
  int ans=1;
  for (int i = 2; i <= n; i++) {
    ans = ans * i;    
  }
  return ans;
}

int main(void) {
  int a = 5;  // Overflow happens with a >= 28
  int f1, f2;
  f1 = fact_recursive(a);
  f2 = fact_iterative(a);
  printf("Recursive factorial of %d is %d\n", a, f1);
  printf("Iterative factorial of %d is %d\n", a, f2);
}
