// endian.c
// Experiment with addresses in string
#include <stdio.h>
#include <stdint.h>

void main() {
    int16_t i[] = {0x6362, 0x6420, 0x6500};
    // int32_t i[] = {0x64206362, 0x73206500, 0x7400646F};

    printf("The first element of i is i[0] = %#x\n", i[0]);
    // addresses of each elements of i
    printf("Address of i[0] = %p\n", &i);
    printf("Address of i[0] = %p\n", &i[0]);
    printf("Address of i[1] = %p\n", &i[1]);
    // printf("Address of i[1] = %p\n", (&i)+1);
    printf("Address of i[2] = %p\n", &i[2]);

    // typecast i to refer to each byte (or char)
    printf("First byte in array i: %#x = %c\n", ((char*) i)[0], ((char*) i)[0]);
    printf("2nd byte: %#x = %c\n", ((char*) i)[1], ((char*) i)[1]);
    printf("3rd byte: %#x = %c\n", ((char*) i)[2], ((char*) i)[2]);
    printf("4th byte: %#x = %c\n", ((char*) i)[3], ((char*) i)[3]);
    // addresses
    printf("Address of 1st byte: %p\n", &((char*) i)[0]);
    printf("Address of 2nd byte: %p\n", &((char*) i)[1]);
    
    printf("i is a string of %s\n", i);
    // we can also print the string in i this way:
    printf((char*) i);
    printf("\n\n");
}