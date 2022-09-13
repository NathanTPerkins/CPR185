#include <stdio.h>

double heightClearance(double startHt, double endHt, double distEnd, double d){
    double x = (d/distEnd)*(endHt-startHt);
    return x + startHt;
}


int main(int argc, char ** argv){
    double hAnt, dAnt, dTree, hTower;
    double hTree;

    printf(" Enter antenna ht, distance to antenna, distance to tree, and Tower ht:\n");
    scanf(" %lf %lf %lf %lf", &hAnt, &dAnt, &dTree, &hTower);

    hTree = heightClearance(hTower, hAnt, dAnt, dTree);

    printf("you can clear a %.3lf meter tree at %.3lf meters.\n", hTree, dTree);
}