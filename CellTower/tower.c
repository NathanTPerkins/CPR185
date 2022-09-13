#include <stdio.h>


int main(int argc, char ** argv){
    double hAnt, dAnt, dTree, hTower;
    double hTree;

    printf(" Enter antenna ht, distance to antenna, distance to tree, and Tower ht:\n");
    scanf(" %lf %lf %lf %lf", &hAnt, &dAnt, &dTree, &hTower);

    hTree = (dTree/dAnt) * (hAnt - hTower);
    printf("%.3lf\n", hTree);
}