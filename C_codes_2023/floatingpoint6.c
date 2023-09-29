// floatingpoint6.c
#include <stdio.h>
#include <stdint.h>
#include <math.h>

/* To see the fp representation, we need to read the memory at address of the float variable.
Then create another pointer to point to this address.
But the value pointed by this pointer is unsigned int.
*/
uint32_t fp32_rep(float* x) {
    return *((uint32_t *) x); 
}

// Get the (biased) exponent. The exponent is 8-bit, hence, uint8_t type.
uint8_t get_exponent(uint32_t x) {
    return (x >> 23);  // shift right by 23 bits.
}

// Get the significand. The lowest 23 bits are the significand. 
uint32_t get_significand(uint32_t x) {
    return (x & 0x7fffff);  // bit-wise AND the fp32 form with 0x7fffff
    // return ((x << 9) >> 9); // Another equivalent way 
}

void main() {    
    // float i = 2;
    // float i = -0.1;
    float i = 1 * (pow(2,4) + pow(2,-2));
    // float i = 1 * (pow(2,-126) + pow(2,-126-23));
    // float i = -1 * (pow(2,-130) + 0*pow(2,-14));
    // float i = 0x40000000; // should be 2 but this doesn't work because the hex number is interpreted as an int.

    printf("i = %lf\n", i);
    uint32_t j = fp32_rep(&i);
    printf("The fp32 representation of i is %#08x\n", j);
    printf("Exponent: %u, after removing bias is %d\n", get_exponent(j), (int) get_exponent(j) - 127);
    printf("Significand: %#08x\n\n", get_significand(j));
}