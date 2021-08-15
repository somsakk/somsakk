// Example from the lecture note on Pointers and Parameter Passing

#include <stdio.h>
// #include <stdlib.h>

// C passes parameters by value. The variables inside a function are created and exist only in the function, 
// although the variable may have the same name. 
void addOne (int x) {
    x++;
}

void addOneCorrect (int *p) {
    *p = *p + 1;
}

int main(int argc, char **argv)
{
    int x = 3;

    printf("x = %d\n", x);

    addOne(x);
    printf("x = %d\n", x);
     
    addOneCorrect(&x);
    printf("x = %d\n", x);

    return 0;
}