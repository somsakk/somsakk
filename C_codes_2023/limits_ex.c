// limits_ex.c
#include <stdio.h>
#include <stdlib.h> // This library declares sizeof() function
#include <limits.h> // for limits
#include <stdint.h> // for unint32_t type

// print sizes of various types
void printlimits() {
    printf("%d, %d\n", (int) sizeof(int), (int) sizeof(unsigned int));
    printf("int min = %d, max = %d\n", INT_MIN, INT_MAX);
    printf("int min = %x, max = %x\n", INT_MIN, INT_MAX);
    printf("int min = %#x, max = %#x\n", INT_MIN, INT_MAX); // add 0x before the number
    printf("unsigned int max = %d\n", UINT_MAX); // print int
    printf("unsigned int max = %u\n", UINT_MAX); // print unsigned int
    printf("unsigned int max = %#x\n", UINT_MAX);
}

int main() {
    int a=INT_MAX + 1;
    uint32_t b=0xffffffff;
    printlimits();
    printf("a = %d = %u = %#x\n", a, a, a);
    printf("b = %d = %u = %#x\n", b, b, b);
}

