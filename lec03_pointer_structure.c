#include <stdio.h>
#include <stdint.h>

typedef struct {
    int x;
    int y;
    // you may try what happen if y is a 1-byte integer
    // int8_t y;
} Point;

int main () {
    Point p1;
    Point p2;
    Point *paddr;

    /* dot notation */
    p1.x = 1; p1.y = 2;
    p2.x = 10; p2.y = p1.y;
    printf("p1(%d,%d) and p2(%d,%d)\n", p1.x, p1.y, p2.x, p2.y);
    printf("Addreses: &p1=%p, &p2=%p, paddr=%p\n", &p1, &p2, paddr);
    
    // printf("*p = %d\n", *paddr); // Reading the value of the address pointerd by a null pointer creshes the program 
    // To avoid this error, we could check first if the pointer is not null before accessing the variable value it points to
    if (paddr) {
        printf("*p = %d\n", *paddr); // Reading the value of the address pointerd by a null pointer creshes the program 
    }

    // Observe the addresses of the elements in the two structures.
    printf("Addreses of x,y for p1 and p2: &p1.x=%p, &p1.x=%p, &p2.x=%p, &p2.y=%p\n", &p1.x, &p1.y, &p2.x, &p2.y);

    paddr = &p1;
    printf("Addreses: &p1=%p, &p2=%p, paddr=%p\n", &p1, &p2, paddr);

    // arrow notation
    printf("p1(%d,%d) and p1(%d,%d)\n", p1.x, (&p1)->y, paddr->x, (*paddr).y);

    // We can assign the structure
    p1 = p2;
    printf("p1(%d,%d) and p1(%d,%d)\n", p1.x, (&p1)->y, paddr->x, (*paddr).y);

}

