// sizeof_ex.c
#include <stdio.h>
#include <stdlib.h> // This library declares sizeof() function

// print sizes of various types
void printsize() {
    /*  Since we are printing out with integer format (%d), need to 
        converse the type of the output of sizeof() as int with (int) 
        This is called "type casting"*/
    printf("1. %d, %d\n", (int) sizeof(int), (int) sizeof(unsigned int));
    printf("2. %d, %d\n", (int) sizeof(int64_t), (int) sizeof(int32_t));
    printf("3. %d, %d\n", (int) sizeof(int16_t), (int) sizeof(int8_t));
    printf("4. %d, %d\n", (int) sizeof(char), (int) sizeof(short));
    printf("5. %d, %d\n", (int) sizeof(float), (int) sizeof(double));
}

int main() {
    int a=10;
    int ar[3]; // ar is an array of 3 integers
    printsize();
    // We can also use sizeof() to determine the sizes of variables
    printf("6. %d, %d\n", (int) sizeof(a), (int) sizeof(ar));
}

