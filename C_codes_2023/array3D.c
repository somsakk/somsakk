// array3D.c
#include<stdio.h>
#include<stdint.h>

int main(void)
{
    double f[2][3][3] = {   {{1,2,3},{4,5,6},{7,8,9}}, \
                            {{10,11,12},{13,14,15},{16,17,18}}};
    
    printf("f[0][0][0] = %lf, ", f[0][0][0]);
    printf("f[0][0][1] = %lf, ", f[0][0][1]);
    printf("f[0][1][1] = %lf, ", f[0][1][1]);
    printf("f[1][0][0] = %lf, ", f[1][0][0]);
    printf("f[1][1][1] = %lf\n", f[1][1][1]);

    printf("Address of f[0][0][0] is %p\n",  &f[0][0][0]);
    printf("Address of f[0][0][1] is %p\n",  &f[0][0][1]);
    printf("Address of f[0][1][1] is %p\n",  &f[0][1][1]);
    printf("Address of f[1][0][0] is %p\n",  &f[1][0][0]);
    printf("Address of f[1][1][1] is %p\n",  &f[1][1][1]);

    printf("Value of array name f is %p\n",  f);
 
    printf("***f \t= %lf\n", ***f);
    printf("f \t= %p\n", f); // f, *f, and **f are address of f[0][0][0]
    printf("*f \t= %p\n", *f); 

    printf("f+1 \t= %p\n",  f+1);  // f + 1 is the address of f[1][0][0]
    printf("f+2 \t= %p\n",  f+2); 
    printf("sizeof(f) = %d = %#x\n",  (uint32_t) sizeof(f), (uint32_t) sizeof(f));
}
