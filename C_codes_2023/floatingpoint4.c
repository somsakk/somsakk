// floatingpoint4.c
#include <stdio.h>
#include <stdint.h>

void main() {    
    // float i = 0.25;
    float i = -8.125;
    // float i = 0.1;
    // float i = 0x3dcccccd; // this doesn't work correctly. The hex number is interpreted as an int.

    // To print out the fp representation, we need to read the memery at address &i as uint32_t number.
    // So we make a uint32 pointer to the address &i 
    uint32_t * i_fp32_pointer = (uint32_t *) &i; 

    printf("i = %lf\n", i);
    printf("Printf of i in hex gives %#x, which is incorrect fp32 of i.\n", i);
    printf("Actually, the fp32 representation of i is %#08x\n\n", *i_fp32_pointer);
}