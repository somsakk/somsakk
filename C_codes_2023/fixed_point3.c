// fixed_point3.c
// From https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
#include <stdio.h>
#include <stdint.h>
#include <math.h>
/// Fixed-point Format: 3.5 (8-bit)
typedef uint8_t fixed_point_t;

#define FIXED_POINT_FRACTIONAL_BITS 5

/* Converting from fixed-point to floating-point is straightforward.
 We take the input value and divide it by (2^fractional_bits), 
 putting the result into a float. */
float fixed_to_float(fixed_point_t input)
{
    return ((float)input / (float)(1 << FIXED_POINT_FRACTIONAL_BITS));
}

/* To convert from floating-point to fixed-point using the nearest rouding, 
we follow this algorithm:
1) Calculate x = floating_input * 2^(fractional_bits)
2) Round x to the nearest whole number (e.g. round(x))
3) Store the rounded x in an integer container */
fixed_point_t float_to_fixed(float input)
{
    return (fixed_point_t)(round(input * (1 << FIXED_POINT_FRACTIONAL_BITS)));
}

void main() {
    // float xfloat = 3 +  0*1./2 + 1*1./4 + 1*1./8 + 0*1./16 + 1*1./32 ; // 0b011.01101 = 0x6d = 3.40625
    //   float xfloat = 5.0625; // 5.625 = 0xb4, 5.0625 = 0xa2 
    // float xfloat = fixed_to_float(0x01); // 0x01 = 0.03125 = 2^{-5}
    float xfloat = 0.025;

    printf("%d fractiobnal bits means fractional step: %lf\n", FIXED_POINT_FRACTIONAL_BITS, 1/(float)(1 << FIXED_POINT_FRACTIONAL_BITS));
    printf("Float number: %lf\n", xfloat);
    
    fixed_point_t xfix = float_to_fixed(xfloat);   
    printf("--> Fixed point: %#.2x\n", xfix);

    float xfloat2 = fixed_to_float(xfix);
    printf("--> Value of fixed-pt number: %lf\n",  xfloat2);
    printf("--> Float to fixed-point conversion error: %lf\n",  xfloat2-xfloat);
}
