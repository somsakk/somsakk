// global_var_ex0.c
#include<stdio.h>
int x = 1;  // x is a global variable
int foo(int n) {  // n is a local variable
    int a = 2;  // a is also local
    x = 5;  // The global variable x is changed the value to 5
    return n + x + a;
}
int main() {
    int a = 1;
    printf("x=%d\n", x);	// What is printed here?
    printf("foo(%d)=%d\n", a, foo(a)); // What is printed here?
    printf("x=%d\n", x);	// What is printed here?
}