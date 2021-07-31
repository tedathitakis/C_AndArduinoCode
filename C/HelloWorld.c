#include <stdio.h>

int main(){
    int age;
    printf("Hello World\n");
    int x = 3;
    int y;
    y = 3;
    printf("%s World\n", "Hello");
    printf("X: %d Y: %d\n",x,y);
    printf("Give me a radius: ");
    int radius;
    scanf("%d", &radius); //& - address-of-operator (pointer)

    printf("The Value is: %d\n", radius);
    
    char name[20]; //char array of 20 characters. '\0' takes one spot
    scanf("%19s",name);

    printf("%s", name);
    return 0;
}
