#include <stdio.h>

int main(){
    int w, h;
    int bg_red, bg_blue, bg_green;
    scanf("%d %d", &w, &h);
    scanf("%d %d %d", &bg_red, &bg_green, &bg_blue);
    printf("P3\n%d %d\n255\n", w, h);
    for(int i = 0; i < h; ++i){
        for(int j = 0; j < w; ++j){
            printf("%d %d %d\n", bg_red, bg_green, bg_blue);
        }
    }
    return 0;
}