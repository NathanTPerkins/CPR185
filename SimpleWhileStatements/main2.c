#include <stdio.h>
#include <stdlib.h>
int main(){
    double theNum = 0.0;
    double total = 0.0;
    int ct = 0;
    scanf("%lf", &theNum);
    while(theNum != -1){
        total += theNum;
        ct += 1;
        scanf("%lf", &theNum);
    }
    if(ct == 0){
        printf("You entered nothing\n");
    }else{
        printf("Sum of %d item is %lf. Average is %lf.\n", ct, total, total/ct);
    }



    return EXIT_SUCCESS;
}