#include <stdio.h>

int main(){
    /*int size = 8;
    int ages[] = {1,4,60,43,54,3}; //c||cpp [] is with var c# [] is with datatype
    ages[4] = 65;
    //first element - index 0
    //0 - 9
    
    for (int i = 0; i< size; i++)
    {
        printf("%d",ages[i]);
    }
    printf("\n");
    ages[4]  = 45;
    for (int i = 0; i< size; i++){

        printf("%d",ages[i]);
    }*/
    int const rows = 3;
    int const columns = 4;

    int studentGrades[3][4] = {
                                    {1,3,4,6},
                                    {3,2,4,5},
                                    {32,2,4,9}
    };

   for (int i =0; i<rows; i++){
        for (int j = 0; j < columns; j++){
            printf("%d %s %lu ",studentGrades[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}