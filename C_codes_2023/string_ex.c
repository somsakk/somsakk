// string_ex.c
#include <stdio.h>

void main() {
    int arr1[] = {-3,-4,-5};
    char name[20] = "BOB";
    int arr2[] = {3,4,5};

    printf("The string is %s\n", name);
    printf("The first four letters are %c, %c, %c, %c\n", name[0], name[1], name[2], name[3]);
    printf("The first four letters (in decimal) are %d, %d, %d, %d\n", name[0], name[1], name[2], name[3]);
    printf("The next four letters are %d, %d, %d, %d\n", name[4], name[5], name[6], name[7]);
    // Can we access elements outside the array? Let's try.
    printf("%d, %d, %d\n", name[-1], name[20], name[21]);
}
