#include<stdio.h>

int main(void)
{
    int ar[2] = {795, 635};
    
    printf("ar[0] = %d\n", ar[0]);
    printf("ar[1] = %d\n", ar[1]);

    printf("ar[0] = %d\n", *ar);
    printf("ar[1] = %d\n", *(ar+1));

    printf("Address of ar[0] is %p\n",  ar);
    printf("Address of ar[1] is %p\n", ar+1);

    printf("Address of ar[0] is %p\n", &ar[0]);
    printf("Address of ar[1] is %p\n", &ar[1]);
}
