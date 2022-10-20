#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll(int);
int nDr(int, int);

int main(){
    srand(time(NULL));
    int reps, rolls, diesize;
    scanf(" %d %d d %d", &reps, &rolls, &diesize);
    for(int i = 0; i < reps; ++i){
        printf("\033[0;35m%10d\033[0m\n", nDr(rolls, diesize));
    }
    return 0;
}

int roll(int faces){
    return (rand() % faces) + 1;
}

int nDr(int n, int faces){
    int sum = 0;
    for(int i = 0; i < n; ++i){
        sum += roll(faces);
    }
    return sum;
}

