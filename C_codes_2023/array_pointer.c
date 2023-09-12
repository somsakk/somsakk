// array_pointer.c
#include<stdio.h>
#include<stdint.h>

int main(void)
{
    int32_t ar[3] = {93, 81, 97};
    
    printf("ar[0] = %d\n", ar[0]);
    printf("ar[1] = %d\n", ar[1]);
    printf("ar[2] = %d\n", ar[2]);

    // we can access array elements via pointers as well
    printf("ar[0] = %d\n", *ar); // hence, ar[0] is the same as *ar
    printf("ar[1] = %d\n", *(ar+1)); // ar[1] is the as *(ar+1)
    printf("ar[2] = %d\n", *(ar+2));

    // Find addresses of array elements
    // %p is used to print out pointer value
    printf("Address of ar[0] is %p\n",  ar);
    printf("Address of ar[1] is %p\n", ar+1);
    printf("Address of ar[2] is %p\n", ar+2);
    // use & notation
    printf("Address of ar[0] is %p\n", &ar[0]); // ar is the same as &ar[0]
    printf("Address of ar[1] is %p\n", &ar[1]);
    printf("Address of ar[2] is %p\n", &ar[2]);

    // C allows accesing memory outside the array
    printf("ar[3] = %d\n", ar[3]);
    printf("ar[3] = %d\n", *(ar+3));
}
