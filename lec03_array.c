#include<stdio.h>

int main(void)
{
    int ar[2] = {795, 635};
    // int ar[2];     // declare 2-element uninitialized array
    // int ar[3] = {795, 635}; // decare 3-element array but initialize only the first two
    // short int ar[2] = {795, 635}; // try short int which is 2-byte int
    
    printf("ar[0] = %d\n", ar[0]);
    printf("ar[1] = %d\n", ar[1]);
    // Test accessing element outside the array. Get different result in different run.
    printf("ar[2] = %d\n", ar[2]);

    printf("ar[0] = %d\n", *ar);
    printf("ar[1] = %d\n", *(ar+1));
    // Test accessing element outside the array. Get different result in different run.
    printf("ar[2] = %d\n", *(ar+2));

    printf("Address of ar[0] is %p\n",  ar);
    printf("Address of ar[1] is %p\n", ar+1);
    printf("Address of ar[2] is %p\n", ar+2);

    printf("Address of ar[0] is %p\n", &ar[0]);
    printf("Address of ar[1] is %p\n", &ar[1]);
    printf("Address of ar[2] is %p\n", &ar[2]);

}
