// test_uint8.c
#include <stdio.h>
#include <stdint.h> // needed for uint8_t definition
// see stdint.h at 
// https://sites.uclouvain.be/SystInfo/usr/include/stdint.h.html

int main() {
/* 
a = 0x76 = 0b0111_0110
b = 0x8a = 0b1000_1010  
*/
    uint8_t a=0x76, b=0x8a;
    uint8_t c, d;
    uint8_t e='a';
    
    c = a + b;
    d = a - b;
    printf("a = %#x = %d, b = %#x = %d \n", a, a, b, b);
    printf("a+b = %#x = %d \n", c, c);
    printf("a-b = %#x = %d \n", d, d);
    printf("char: a = %c = %#x \n", e, e);
    
    c = a-d;
    printf("a-d = %#x \n", c);
    printf("a+b = %#x = %d, in 32-bits, no overflow \n", a+b, a+b);
    printf("a-b = %#x = %d in 32-bits signed, no overflow \n", a-b, a-b);
    
    printf("a & b = %#x = %d\n", a & b, a & b);
    printf("a | b = %#x = %d\n", a | b, a | b);
    printf("a ^ b = %#x = %d\n", a ^ b, a ^ b);
    printf("~a = %#x = %d\n", ~a, ~a);
    printf("a << 2 = %#x = %d\n", a<<2, a<<2);
    printf("a >> 2 = %#x = %d\n", a>>2, a>>2);
    printf("b >> 2 = %#x = %d\n", b>>2, b>>2);
    return 0;
}
