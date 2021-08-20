// Example from the lecture note on pointer of pointer

#include <stdio.h>
void IncrementPtr (int *p) {
    p = p + 1;
}

void IncrementPtr2 (int **p) {
    *p = *p + 1;
}

int main()
{
    int A[3] = {50, 60, 70};
    int *q = A;

    printf("q = %p, *q = %d\n", q, *q);
    IncrementPtr(q);
    printf("q = %p, *q = %d\n", q, *q);

    IncrementPtr2(&q);
    printf("q = %p, *q = %d\n", q, *q);

}