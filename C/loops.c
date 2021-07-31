#include<stdio.h>

int main()
{
    //initialization
    //comparison
    //update
    int size = 10;
    int ages[] = {12,43,545,3,2,5,45,7,45,86};
    int calculatedSize = sizeof(ages) / sizeof(ages[0]); //closest thing to ages.length note: can't use inside of a function with a passed array because the a pointer is only passed and the size of the pointer will be read
    for(int i = 0; i < 10; i++)
    {
        printf("ages[i] = %d\n",ages[i]);
    }
    for(int i = 0; i <10; i++){
        for(int j = i; j >=0;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    int i = 10;
    while (i<10){
        printf("%d",i);
        //code
        i++;
    }
    int input;
    do
    {
        printf("Choose a number between 0 and 9");
        scanf("%d",&input);
    } while (input <0 || input > 9);
    
    return 0;
}