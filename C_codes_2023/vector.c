/* vector.c
We need to use the sqrt function in math.h library. 
To compile, we need to link the math library to gcc. Do
"gcc vector.c -lm"
Note: The online editor at Programmiz adds -lm automatically */

#include <math.h> // for math functions
#include <stdio.h>

// What does this function do?
double mag(double v[3]) {
  return sqrt(v[0]*v[0] + v[1]*v[1] + v[2]*v[2]);
}

int main () {
  // We can also do a[3] = {3,4,0}; 
  double a[] = {3,4,0}; // The size can be left out and determined by compiler.
  printf("%f, %f, and %f\n", a[1], mag(a), a[3]);
}