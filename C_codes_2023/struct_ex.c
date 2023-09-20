// struct_ex.c
#include "struct_ex.h" // point and rect structures are declared there

int main() {
    int width = 2, height = 3; 
    point p1;
    p1.x = 42; p1.y = 9; // refer to elements inside a struct by a dot .
    rect r1;
    r1.ll = p1;     r1.color = 1;
    r1.ur.x = r1.ll.x + width;  r1.ur.y = r1.ll.y + height;
    char c;
    int64_t d;
    int s1 = sizeof(c); // s1 = 1
    int s2 = sizeof(d);
    int s3 = sizeof(p1); // s3 = 4 + 4 = 8
    int s4 = sizeof(r1); // s4 = 8 + 8 + 4 = 20
    // We can also do "sizeof" of a type,
    int s5 = sizeof(int); // s5 = ?
    int s6 = sizeof(point); // s6 = ?
    int s7 = sizeof(rect); // s7 = ?
    printf("s1 = %d, s2 = %d, s3 = %d\n", s1, s2, s3);
    printf("s4 = %d, s5 = %d, s6 = %d, s7 = %d\n", s4, s5, s6, s7);
    printf("Coordinate of points: p1 = (%d, %d)\n", p1.x, p1.y);
    printf("r1.ll = (%d, %d), ", r1.ll.x, r1.ll.y);
    printf("r1.ur = (%d, %d)\n", r1.ur.x, r1.ur.y);
    // print address (after you've learned Pointer)
    printf("Address of p1 = %p\n", &p1);
    printf("Address of p1.x = %p\n", &p1.x);
    printf("Address of p1.y = %p\n", &p1.y);
    printf("Address of r1 = %p\n", &r1);
    printf("Address of r1.ll = %p\n", &r1.ll);
    printf("Address of r1.ur = %p\n", &r1.ur);
    printf("Address of r1.color = %p\n", &r1.color);
}
