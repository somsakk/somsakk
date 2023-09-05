// global_to_local_ex.c
// Use local variables instead of the global variable max
#include<stdio.h>
int findMax(int a, int b, int c) {
    int max = a; // local variable holding the maximum value
    if (b > max) {
        if (c > b)  {
            max = c;
        } else {
            max = b;
        }
    } else if (c > max) {
        max = c;
    }
    return max;
}
void printMax(int m) {
    printf("The maximum number is: %d\n", m);
}
int main(void) {
    int max;  // what if we assign max=3 here?
    max = findMax(4, 3, 7);
    printMax(max);
}