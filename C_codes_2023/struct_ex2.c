// struct_ex2.c 
#include "struct_ex.h"

void createRect(int x1, int y1, int width, 
                int height, int color, rect *r) {
    r->ll.x = x1; 
    r->ll.y = y1; 
    r->ur.x = x1 + width; 
    r->ur.y = y1 + height;
    r->color = color;
}
 
int main(void) {
    // r1 and r2 denote rectangle of the same widht 
    // and height, but at different locations
    rect r1, r2;
    createRect(3, 5, 10, 20, 1, &r1);
    createRect(2, 8, 10, 20, 1, &r2);
    printf("Address of r1 is %p\n", &r1);
    printf("Address of r2 is %p\n", &r2);
    printf("r1: ur=(%d,%d)\n", r1.ur.x, r1.ur.y);
    printf("r2: ur=(%d,%d)\n", r2.ur.x, r2.ur.y);
}