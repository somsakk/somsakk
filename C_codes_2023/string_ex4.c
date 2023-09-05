// string_ex4.c
#include <stdio.h>
#include <string.h> // for functions of strings

int main() {
    char name[] = "ABab 78+-";
    char ch;
    int len = strlen(name);
    // note: normally we print only from 0 to len-1
    // But here we want to see the null character at index len
    for(int i = 0; i <= len; i++) { 
        ch = name[i];
        printf("%c = %d = %#x\n", ch, ch, ch); 
    }
    printf("Length of %s = %d\n", name, strlen(name));
    printf("Size of the string is %d\n", (int) sizeof(name)); // sizeof include the null character
    printf("Size of the first character `%c` is %d\n", name[0], 
        (int) sizeof(name[0])); 
    
}
