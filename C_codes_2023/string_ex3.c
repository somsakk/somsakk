// string_ex3.c
#include <stdio.h>
#include <string.h> // strlen and strcpy prototypes are here
#define MAXLEN 80
 
void main(void) {
    char name[MAXLEN];
    int len;
    char c;
    strcpy(name, "BOB"); // copy BOB into name

    len = strlen(name);  // len = 3
    c = name[1];         // c = 'O' (79)
    printf("len=%d, c=%c=%d\n", len, c,c);
}