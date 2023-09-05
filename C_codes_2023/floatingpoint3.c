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
    // another way to print out the fp representation
    uint32_t *ip = (uint32_t *) &i; 

    printf("%.20f\n", i);
    printf("%#x and in float %.20f\n", (unsigned int) i, i);

    printf("sizeof(int)=%lu, sizeof(float)=%lu\n", sizeof(uint32_t), sizeof(float));

    printf("%#.8x\n", *ip);

    // make the number negative
    // *ip += 0x80000000;
    // *ip += (0x80 << 24);
    *ip += 1 << 31;

    printf("%#.8x --> %.10f\n", *ip, i);
    printf("%#.8x --> %.10f\n", *ip, (float) *ip);
    printf("%#.8x (illegal access) \n", *(ip+1));

}