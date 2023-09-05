// sum_include_file_ex.c
// To compile, do `gcc sum_include_file_ex.c sum_func.c -o output` 
// To run, do `./output`
// Note: the normal run button in VSCode doesn't work since the two c files must be compiled together.

#include <stdio.h>
#include "sum_func.h" // header file contains only the function prototype for sum3
// The function is defined in sum3_func.c

int main(void) {
  int a = 0;
  a = sum3(6, 7, 8);
  printf("sum3 gives %d\n", a);
  a = sum2(6,7);
  printf("sum2 gives %d\n", a);
}