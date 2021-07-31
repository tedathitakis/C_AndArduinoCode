#include <stdio.h>
#include "Libraries.h"
//dry principle  "Every piece of knowledge must have a single, unambiguous, authoritative representation within a system".
int square(int input){
    
    input *= input;
    return input;
}
int cube (int input){
    return input*input*input;
}
int power (int input, int exponant){
    if(exponant == 0) return 1;
    if(exponant == 1) return input;
    int orgIn = input;
    for (int i = exponant; i > 1; i--){
        input *= orgIn;
    }
    return input;

}
int recursivePower(int input, int exponant){
    if(exponant < 1){
        return 1;
    }
    return input * recursivePower(input, exponant-1);
}
void changeVal(int *input){ // * pointer to the position of input (y)
    *input = 90000; // * pointer
}
int oldestValue(int ages[], int size){
    int largest = ages[0];
    for (int i = 1; i < size; i++){
        if (ages[i] > largest){
            largest = ages[i];
        }
    }
    return largest;
}