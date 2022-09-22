#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, a;

    scanf("%d %d %d", &x, &y, &a);

    if(a<x<y){
        puts("between");
    }


    return EXIT_SUCCESS;
}