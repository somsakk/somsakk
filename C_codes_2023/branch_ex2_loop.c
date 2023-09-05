// The Loop Example in p.53
// To simplify, assume A is an array with 3 elements only. 

#include<stdio.h>

int main () {
    int A[] = {8,1024,-2};
    int sum = 0, i = 0;
    int N = 3; // length of array A

    for (i = 0; i < N; i++) {
        sum += A[i];
        printf("i = %d, A[%d] = %4d = %#10x, current sum = %4d = %#10x\n", i, i, A[i], A[i], sum, sum);
    }
    printf("sum = %d = %#x\n", sum, sum);
}