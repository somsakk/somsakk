// floatingpoint.c
#include <stdio.h>
#include <stdint.h>

void main() {
    float i[] = {0.1, 0.2, 0.3, 0.4, 0.5, 0.025, 1.1};
    char *p;
    
    printf("%.20f\n", i[0]);
    printf("%.20f\n", i[1]);
    printf("%.20f\n", i[2]);
    printf("%.20f\n", i[3]);
    printf("%.20f\n", i[4]);
    printf("%.20f (0.5)\n", i[1]+i[2]); 
    printf("%.20f (0.5)\n", i[0]+i[3]); 
    printf("%.20f (0.1)\n", i[2]-i[1]);
    printf("%.20f (0.1)\n", i[3]-i[2]);
    printf("%.20f (0.2)\n", i[3]-i[1]);
    printf("%.20f\n", i[5]);
    printf("%.20f\n", i[5]*2);
    printf("%.20f\n", i[5]*20);
    printf("%.20f\n", i[6]);
    printf("%.20f\n", i[6]*10);

    printf("Address of i[0] = %p\n", &i[0]);
    printf("Address of i[1] = %p\n", &i[1]);

    // See fp representation of 0.1
    // We can check with 
    // https://www.h-schmidt.net/FloatConverter/IEEE754.html
    printf("**See fp representation of 0.1**\n");
    printf("%#x\n", ((char*) i)[0]); // show LSB
    printf("%#x\n", ((char*) i)[1]);
    printf("%#x\n", ((char*) i)[2]);
    printf("%#x\n", ((char*) i)[3]); // MSB 
    // Showing in hex of i[0] is not correct.
    printf("%#x and in float %.20f\n", i[0], i[0]); 
    printf("%p\n", &((char*) i)[0]);
    printf("%p\n", &((char*) i)[1]);

    printf("**See fp representation of 0.2**\n");
    printf("%#x\n", ((char*) i)[4]);
    printf("%#x\n", ((char*) i)[5]);
    printf("%#x\n", ((char*) i)[6]);
    printf("%#x\n", ((char*) i)[7]);
    printf("%#x and in float %.20f\n", i[1], i[1]);

    // We can change the MSB byte in the first float number
    ((char*) i)[3] = 0xbd; // add 0x80 to make the number negative.
    printf("%#x\n", ((char*) i)[3]); // MSB 
    printf("%#x and in float %.20f\n", i[0], i[0]); 

    // make the first number NaN
    ((char*) i)[3] = 0x7f; 
    ((char*) i)[2] = 0xc0; 
    printf("%#x and in float %.20f\n", i[0], i[0]); 

    // make the first number inf
    ((char*) i)[3] = 0x7f; 
    ((char*) i)[2] = 0x80;
    ((char*) i)[1] = 0x00;
    ((char*) i)[0] = 0x00; 
    printf("%#x and in float %.20f\n", i[0], i[0]); 

    // However, this doesn't get inf
    i[0] = 0x7f800000;
    printf("%#x and in float %.20f\n", i[0], i[0]); 

    // Change i[1] to -0.5 
    p = i+1; // the address of i[1]
    printf("Value of p = %p\n", p);
    *(p+3) = 0xbf;  // MSB
    *(p+2) = 0x00;
    *(p+1) = 0x00;
    *p = 0x00;  // LSB
    printf("%#x and in float %.20f\n", i[1], i[1]);
}