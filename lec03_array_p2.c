#include<stdio.h>

int main(void)
{
    // suppose you first have a 3-element array
    // int ar[3] = {10, -9, 20}; 
    // but later change to 2-element
    int ar[2] = {10, -9};

    int sum = 0;

    // you want to calculate the sum of all the elements in the array
    for (int i=0; i<3; i++) {
        sum += ar[i];
    }
    printf("Sum is %d\n", sum);
}
