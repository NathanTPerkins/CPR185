#include <stdio.h>
#include <math.h>

double v(double);

int main(){

    double deltat, endt;
    double sum = 0;
    double cur_t, next_t;

    scanf("%lf %lf", &deltat, &endt);

    cur_t = 0;
    next_t = cur_t + deltat;

    while(next_t <= endt){
        sum += (v((next_t+cur_t)/2.0)) * deltat;
        cur_t = next_t;
        next_t = cur_t + deltat;
    }
    sum += (v((next_t+cur_t)/2.0)) * (endt-cur_t);


    printf("%lf\n", sum);


    return 0;
}

double v(double t){
    return t/10.0;
}