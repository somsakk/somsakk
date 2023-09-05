// func_prototype.c
// Prototypes needed for f1 and/or f2 because they
// can’t both be declared before each other
#include <stdio.h>

int f1(int);
int f2(int);

int f1(int n) {
  int res;
  if (n == 1) {
    res = 1;
  } else { 
    res = f2(n-1) + 1;
  }
  return res;
} 

int f2(int n) {
  int res;
  if (n == 1) {
    res = 1;
  } 
  else {
    res = f1(n-1)*2;
  }
  return res; 
}

void main(void) {
  int answer;
  answer = f1(5);
  printf("Answer = %d\n", answer);
}