#include <stdio.h>
#include <stdint.h>

// a point is specified by (x,y) coordinate
typedef struct point {
    int x;
    int y;
} point;

// a rectangle is specified by the lower-left and upper-right points and color.
typedef struct rect {
    point ll;
    point ur;
    int color;
} rect;