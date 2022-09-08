#include <stdio.h>

/*
 * This program show the precision of the double data type
 */

int main(int argc, char ** argv){
    double z;
    z = 1.0/3;
    printf("%.25lf\n", z);
    z = z + .00000000001;
    printf("%.25lf\n", z);
    printf("%.25lf\n", 3*z);
    return 0;
}