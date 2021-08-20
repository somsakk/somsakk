#include<stdio.h>

int sum(int *ar, int ar_size) {
    int s=0;
    for (int i=0; i < ar_size; i++) {
        s += ar[i];
    }
    return s;
}

int main(void)
{
    // suppose you first have a 3-element array
    int ar[3] = {10, -9, 20};
    // but later change to 2-element
    // int ar[2] = {10, -9};

    int N = 3; 

    // Note: If we swap the order, there is an error "variable-sized object may not be initialized"
    // int N = 2;
    // int ar[N] = {10, -9};

    printf("Sum is %d\n", sum(ar, N));
}
