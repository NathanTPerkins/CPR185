#include <stdio.h>

/*
 *
 * This program is an infinite while loop that shows the wrap that integers go through after reaching their max limit
 *
 */

int main(int argc, char **argv){
    int sum = 0;
    while(1){
        sum += 1;
        if(sum % 10000 == 0){
            printf("sum: %d\n", sum);
        }
    }
    return 0;
}