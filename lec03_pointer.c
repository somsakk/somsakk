/* You can print a pointer value using printf with the %p format specifier. 
See https://www.cs.yale.edu/homes/aspnes/pinewiki/C(2f)Pointers.html
 */

#include <stdio.h>
#include <stdlib.h>

int main () {
    int x;
    int *p;     // p is a pointer to an integer variable

    printf("Before initialized:\n");
    printf("x = %d,\taddress of x is %p, \tvalue of p = %p, value of *p = %d\n", x, (void *) &x, (void *) p, *p);
    // Verify if the (void *) is not needed
    printf("x = %d,\taddress of x is %p, \tvalue of p = %p, value of *p = %d\n", x, &x, p, *p); 

    p = &x; // p is the address of x
    printf("After initialized p:\n");
    printf("x = %d,\taddress of x is %p, \tvalue of p = %p, value of *p = %d\n", x, (void *) &x, (void *) p, *p);

    x = 3;
    printf("After initialized x:\n");
    printf("x = %d,\t\taddress of x is %p, \tvalue of p = %p, value of *p = %d\n", x, (void *) &x, (void *) p, *p);
    
    x = 2*x;
    printf("After changed value of x:\n");
    printf("x = %d,\t\taddress of x is %p, \tvalue of p = %p, value of *p = %d\n", x, (void *) &x, (void *) p, *p);

    *p = x + 10;  // alternatively, x = x+10 or *p = *p + 10
    printf("After changed value of x:\n");
    printf("x = %d,\t\taddress of x is %p, \tvalue of p = %p, value of *p = %d\n", x, (void *) &x, (void *) p, *p);
}