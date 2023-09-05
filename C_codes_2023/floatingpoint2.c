// floatingpoint2.c
#include <stdio.h>
#include <stdint.h>

uint32_t form_fp_rep(char *p1) {
    uint32_t x=0;
    for (int i=0; i<4; i++) {
        x += ((*(p1)) & 0x000000ff) << (8*i);
        p1++;
    }
    return x;
}

void main() {
    // float i = 0x3f018021;
    float i = 0.505861341953;
    // float i = -0.505861341953;

    char *p;
    
    printf("%.20f\n", i);
    printf("%#x and in float %.20f\n", (unsigned int) i, i);

    // print each bytes in the fp representation of i
    p = &i;
    printf("%#.2x\n", *p); // LSB
    printf("%#.2x\n", *(p+1)); 
    printf("%#.2x\n", *(p+2)); 
    printf("%#.2x\n", *(p+3)); // MSB
    
    printf("%#.8x --> %.10f\n", form_fp_rep(p), i);
    // this also get to i
    printf("%#.8x --> %.10f\n", form_fp_rep(p), *p);

    *(p+3) += 0x80; // make the number negative
    printf("%#.8x --> %.10f\n", form_fp_rep(p), i);
}