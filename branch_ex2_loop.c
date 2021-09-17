#include<stdio.h>

int main () {
    int A[3] = {8,1,-2};
    int sum = 0, i = 0;
    int N = 3;

    for (i = 0; i < N; i++) {
        sum += A[i];
    }
    printf("sum = %d\n", sum);
}