// number_ex.c
#include <stdio.h>

int main() {
    int a[] = {-1, 0xffffffaf, 0xaf};
    int N=3;
    
    for (int i=0; i<N; i++) {
        printf("%d = %#x\n", a[i], a[i]);
    }
    
    for (int i=-8; i<9; i++) {
        printf("%d = %#x\n", i, i);
    }
    for (int i=0; i<33; i++) {
        printf("%d = %#x\n", 1 << i, 1 << i);
    }

    return 0;
}