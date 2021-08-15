#include <stdio.h>
#include <math.h>

int main(void)
{
    int angle_degree;
    double angle_radian, pi, value;

    printf("Compute a table of the sine function\n\n");
    pi = 4.0*atan(1.0); /* could also just use pi = M_PI */
    printf("Value of PI = %f \n\n", pi);
    printf("Angle\tSine\n");
    
    // angle_degree = 0;/* initial angle value */
    // while (angle_degree <= 360) { /* loop til angle_degree > 360 */
    //     angle_radian = pi * angle_degree / 180.0;
    //     value = sin(angle_radian);
    //     printf ("%3d\t%f\n ", angle_degree, value);
    //     angle_degree += 10; /* increment the loop index */
    // }

    angle_degree = 0;/* initial angle value */
    do {
        angle_radian = pi * angle_degree / 180.0;
        value = sin(angle_radian);
        printf ("%3d\t%f\n ", angle_degree, value);
        angle_degree += 10; /* increment the loop index */
    } while (angle_degree <= 360);

    // for (int angle_degree = 0; angle_degree <= 360; angle_degree += 10) {
    //     angle_radian = pi * angle_degree / 180.0;
    //     value = sin(angle_radian);
    //     printf ("%3d\t%f\n ", angle_degree, value);
    // }

    // for (int d = 0; d <= 36; d++) {
    //     angle_degree = 10 * d;
    //     angle_radian = pi * angle_degree / 180.0;
    //     value = sin(angle_radian);
    //     printf ("%3d\t%f\n ", angle_degree, value);
    // }

    return 0;
}
