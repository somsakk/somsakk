// array3D.c
#include<stdio.h>
#include<stdint.h>

int main(void)
{
    double f[2][3][3] = {   {{1,2,3},{4,5,6},{7,8,9}}, \
                            {{11,12,13},{14,15,16},{17,18,19}}};
    // double f[2][3][3] ;
    
    printf("f[0][0][0] = %lf\n", f[0][0][0]);
    printf("f[0][0][1] = %lf\n", f[0][0][1]);

    printf("Address of f[0][0][0] is %p\n",  &f[0][0][0]);
    printf("Address of f[0][0][1] is %p\n",  &f[0][0][1]);
    printf("Address of f[1][2][2] is %p\n",  &f[1][2][2]);

    printf("Value of f is %p\n",  f);
 
    printf("***f = %lf\n", ***f);
    printf("*f \t= %p\n", *f);
    printf("**f \t= %p\n", **f);

    printf("*\(**f + 1) = %lf\n", *(**f + 1));
    printf("*\(**f + 2) = %lf\n", *(**f + 2));
    printf("*\(**f + 17) = %lf\n", *(**f + 17));

    printf("**f + 1 \t= %p\n", **f + 1);
    printf("**f + 17 \t= %p\n", **f + 17);

    printf("f+1 \t= %p\n",  f+1);
    printf("f+2 \t= %p\n",  f+2);
    printf("sizeof(f) = %d = %#x\n",  (uint32_t) sizeof(f), (uint32_t) sizeof(f));
}
