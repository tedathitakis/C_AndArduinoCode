#include <stdio.h>      //struct [structure tag] {
typedef struct          // member definition;
{                       // ...
   int length;          //member definition;
    int width;          //} [one or more structure variables]; // this needs member variables to be defined (struct var needed)
} square;
struct rectangle{
    int length;
    int width;
};
typedef struct
{
    int x;
    int y;
} position;
typedef struct buildingPlan
{
    char owner[30];
    struct rectangle rectangle;
    position position;
} buildingPlan;
int main(){
    
    struct rectangle myRectangle = {5,10};
    square Square;
    printf("Length %d. Width: %d\n", myRectangle.length, myRectangle.width);
    
    buildingPlan myHouse = {"Caleb Curry",{5, 10},{32,48}};

    printf("the house %d %d (size %d %d) is owned by %s\n",
            myHouse.position.x,
            myHouse.position.y,
            myHouse.rectangle.length,
            myHouse.rectangle.width,
            myHouse.owner
);

int size  = 3;
position path[] = {{0,1},{1,2},{3,4}};

for (int i = 0; i < size; i++){
    printf("%d %d\n", path[i].x,path[i].y);
}
buildingPlan *structPointer = &myHouse;
printf("Position x: %d\n",structPointer-> position.x);
return 0;
}