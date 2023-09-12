/* vectorN.c
Calculate the magnitude of vector with any dimension.
We need to use the sqrt function in math.h library. 
To compile, we need to link the math library to gcc. Do
"gcc vectorN.c -lm"
Note: The online editor at Programmiz adds -lm automatically */

#include <math.h> // for math functions
#include <stdio.h>

// What does this function do?
double mag(double *v, int len) {
  double sum = 0;
  for (int i = 0; i < len; i++) {
    sum += v[i]*v[i];
  }
  return sqrt(sum);
}

int main () {
  // We can also do a[3] = {3,4,0}; 
  // double a[] = {3,4,0}; // The size can be left out and determined by compiler.
  double a[] = {-3,0,0,4,0};
  printf("%f, %f, and %f\n", a[0], mag(a, 5), a[3]); 
  printf("%f, %f, and %f\n", *a, mag(&a[0], 5), *(a+3)); // *a is the same as a[0] 
}