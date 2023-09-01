// factorial2.c
// David_Harris@hmc.edu 22 October 2019
#include <stdio.h>

int fact(int n) {
  int ans;
  if (n <= 1) {
    ans = 1;
  } 
  else {
    ans = n*fact(n-1);
  }
  return ans;
}

int fact_interative(int n) {
  int ans=1;
  for (int i = 2; i <= n; i++) {
    ans = ans * i;    
  }
  return ans;
}

int main(void) {
  int a = 5;
  int result;
  result = fact(a);
  result = fact_interative(a);
  printf("factorial of %d is %d\n", a, result);
}
