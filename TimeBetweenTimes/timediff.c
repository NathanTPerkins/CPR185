#include <stdio.h>

void printTime(int, int, double, char);
double secSinceMidnight(int, int, double, char);
int milHours(int, char);

int main(){
    int h1, m1;
    double s1;
    char ampm;

    scanf("%d:%d:%lf %cM", &h1, &m1, &s1, &ampm);

    printTime(h1, m1, s1, ampm);

    return 0;
}

void printTime(int h, int m, double s, char ampm){
    printf("%2d:%2d:%6.3lf %cM\n", h, m, s, ampm);
}

double secSinceMidnight(int h, int m, double s, char ampm){
    return milHours(h, ampm) * 60 * 60 + m * 60 + s;
}

int milHours(int h, char ampm){
    if(h == 12 && ampm == 'A'){
        return 0;
    }
    if(ampm == 'A' || h == 12){
        return h;
    }
    return h + 12;
}