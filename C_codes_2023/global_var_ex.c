// global_var_ex.c
// Use a global variable to find and print the maximum of 3 numbers
#include <stdio.h>
int max; // global variable holding the maximum value
void findMax(int a, int b, int c) {
    max = a;
    if (b > max) {
        if (c > b) {
            max = c;
        } else {
            max = b;
		}
    } else if (c > max) {
        max = c;
    }
}
void printMax(void) {
    printf("The maximum number is: %d\n", max);
}
int main(void) {
    findMax(4, 3, 7);
    printMax();
}