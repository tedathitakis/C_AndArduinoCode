#include<stdio.h>
int main(){
    //int x = 5 + 5; 5s - operands
    // plus minus (uniary) sign
    // arithmatic (binary) + - * / %
    // Increment/ decrement (uniary) ++ --
    // Assignment operators (Binary) = += -= /= *= %=
    //Comparison operators (Binary) == > < >= <= !=
    //logical operators (Binary) && || !
    //conditional operators (Ternary) ? : (Kind of like an if statement)
    printf("%%\n");
    int er = 45;
    printf("%d\n",er++); //post increment assigns  
    er++;
    printf("er: %d\n",er);
    int sb = er++; //post increment assigns value then increases operand connected to it by one
    int sc = ++er; //pre increment increase value of operand by one then assigns value to statement
    printf("pre increment: %d\n", ++er);
    return 0;
}