#include<stdio.h>
#include <stdint.h>

/*  The "%d" format is for (signed) int values. If you use it with
 an unsigned value, it could print something other than the 
 actual value.

 Use "%u" to see the unsigned value, or %x to see it in 
 hexadecimal.

 See the formatting escapes in 
 http://www.cplusplus.com/reference/cstdio/printf/

The intN_t and uintN_t types are defined in stdin.h. 
That's why we need #include<stdint.h> in the header. */


int main(void)
{
    int N = 254;
    // int N = -254;
    // int N = 0xffffff00;    // input as hex
    // int N = 05555;   // input as octave 
    // int N = 0b10011010010;  // input as binary

    // char N = 1;  
    // short int N = 1;
    // unsigned int N = 1;
    // unsigned int N = -1;
    // int N = -1;

    // char N = 256;  // The code cannot compile due to overflow. 
    // char N = (char) 256; // Use type conversion to solve it.

    // Here N++ would give an overflow number. N will be zero.
    // Note that there is no overflow warning during compilation.
    // unsigned char N = 256; 
    // N++ ;  // Alternatively, N = N+1;

    // int16_t N = 1;
    // uint16_t N = 1;
    // int8_t N = 127;  // no overflow
    // int8_t N = 255;  // overflow occurs
    // int8_t N = 256; 
    // int8_t N = (int8_t) 255; 
    // int8_t N = 0xff02;
    // int8_t N = (uint8_t) 0xff02;

    printf("sizeof N = %d bytes\n", (int)sizeof(N));
    printf("Decimal: %d\n", N);
    printf("Hex: %x\n", N);
    printf("Octal: %o\n", N);  // cannot print binary
    printf("Unsigned decimal: %u\n", N);
        
    // printf("\nLiterals (not supported by all computers):\n");
    // printf("0x4d2           = %d (hex)\n", 0x4d2);
    // printf("0b10011010010   = %d (binary)\n", 0b10011010010);
    // printf("02322           = %d (octal)\n", 02322);
}
