#include <stdio.h>

int main(int argc, char ** argv){
    int i;
    char c;
    double ft;

    scanf("%d %lf", &i, &ft);

    printf("%d %12.9lf\n", i, ft);

    return 0;
}