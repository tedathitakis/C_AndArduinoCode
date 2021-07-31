#include <stdio.h>
void square(int *input){
    *input *= *input; //pointer make it able to change vars in functions
}

void sizeExample(int ages[]){
    printf("memory size of ages = %lu",sizeof(ages));
}

int main(){

    int a = 100; // & address of operator
    int *b = &a; // * signals to create a pointer
            //b now stores the location of a
    printf("a = %d\n",a);
    printf("*b = %d\n",*b); // * indirection operator "dereferencing a pointer"
                            // * is different here than above
    a = 200;
    
    printf("a = %d\n",a);
    printf("*b = %d\n",*b);

    *b = 300;
    printf("a = %d\n",a);
    printf("*b = %d\n",*b);
    int c = 6000;
    b = &c; // b itself is a value in memory and b* is the value b points to
    a =4000;
    printf("a = %d\n",a);
    printf("*b = %d\n",*b);
    int x = 5;
    square(&x);
    printf("%d\n",x);
    int size = 6;
    int ages[] = {2,43,63000,23,05,53}; //decays to a pointer
    printf("memory size of ages = %lu",sizeof(ages));

    sizeExample(ages);

    return 0;
    
}