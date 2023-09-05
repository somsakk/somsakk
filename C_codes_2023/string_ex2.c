// string_ex2.c
#include <stdio.h>
#define MAXLEN 80
 
int strlen1(char str[]) {
    int len=0;
    while (str[len] && len < MAXLEN) len++;
    return len;
}
 
void strcpy1(char dest[], char src[]) {
    int i = 0; 
    do { 
    dest[i] = src[i];
    } while (src[i++] && i < MAXLEN);
}

void main(void) {
    char name[MAXLEN];
    int len;
    char c;
    strcpy1(name, "BOB"); // copy BOB into name
    // Can we do this?
    // name = "BOB"; 

    len = strlen1(name);  // len = 3
    c = name[1];         // c = 'O' (79)
    printf("len=%d, c=%c=%d\n", len, c,c);
}