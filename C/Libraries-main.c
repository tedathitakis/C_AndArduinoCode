#include <stdio.h>
#include "Libraries.h"

int main(){

    int x = 5;
    int y = 3;
    changeVal(&y); //points to the position of y
    int xSquared = square(x);
    int xCubed = cube(x);
    int xTo5 = power(x,5);

    printf("%d\n",xTo5);
    printf("%d\n", xSquared);

    int recursive = recursivePower(5,5);
    printf("%d\n",recursive);
    int size = 6;
    int ages[] = { 1,4, 53, 23, 23, 9};
    printf("%d\n", oldestValue(ages,size));
    return 0;
}