#include <stdio.h>
#include <stdbool.h>

int main(){
    int age = 17;
    double money = 30000;
    if((true)) //or 1 w/o stdbool
    {
        printf("This is true\n");
    }
    else
    {
        printf("this is false yo\n");
    }
    bool isGraduated  = true;
    if(age>17 && money > 25000) 
    {
        printf("This is true\n");
    }
    else
    {
        printf("this is false yo\n");
    }
    if (age < 12) printf("you might be alive\n");
    int menuChoice  = 2;
    switch(menuChoice)
    {
        case 0:
            printf("Case 0\n");
            break;
        case 1:
            printf("Case 1\n");
            break;
        case 2:
            printf("Case 2\n");
            break;
        default:
            printf("Default Case\n");
            break;
    }
    switch (menuChoice)
    {
    case 1:
    case 2:
    case 3: 
        printf("erer");   
        break;
    default:
        printf("hi");
        break;
    }
    double balence = -5000;
    balence > 0 ? printf("You has money\n") : printf("no money yo\n"); //ternary operator ? < question after if true : < if not true;
    bool hasMoney;
    hasMoney = balence > 0 ? 1 : 0;
    printf("hasmoney? 1 = y, 2 = 0 %d\n", hasMoney);
    return 0;
}