#include <stdio.h>
#include <stdint.h>

void main() {
    int32_t i[] = {0x64726167, 0x73206E65, 0x7400646F};
    // int16_t i[] = {0x6472, 0x7320, 0x7400};
    
    printf("%x\n", i[0]);

    printf("Address of i[0] = %p\n", &i);
    printf("Address of i[0] = %p\n", &i[0]);
    printf("Address of i[1] = %p\n", &i[1]);
    // printf("Address of i[1] = %p\n", &i+1);
    printf("Address of i[2] = %p\n", &i[2]);

    printf("%x\n", ((char*) i)[0]);
    printf("%x\n", ((char*) i)[1]);
    printf("%x\n", ((char*) i)[2]);
    printf("%x\n", ((char*) i)[3]);
    printf("%p\n", &((char*) i)[0]);
    printf("%p\n", &((char*) i)[1]);
    
    printf((char*) i);
}