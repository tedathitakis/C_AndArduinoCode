//dynamic memory allows us to access and write to memory in functions as it stays allocated until we free it
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> //required for memory functions
#include <string.h>
typedef struct {
    char name[30];
    int age;
    bool isVerified;
} user; //tyype is now "user" not "struct user"

user *createUser(char name[], int age, bool isVerified){ //constructor of a user struct assign memory, then values, then have it return the location
    user *newUser = malloc(sizeof(user));
    strcpy(newUser->name, name);
    newUser->age = age;
    newUser->isVerified = isVerified;
    return newUser;
}; //the struct was really only fed the location of memory while everything else was inputed manually in the locations by the constructor
void fun()
{
    int static x = 0; //static vars get initialize once and exist for entire program
                      //same scope still applies
    

}

int main(){
    int size;
    printf("how many elements u need: ");
    scanf("%d",&size);

    int *arr = malloc(size * sizeof(int)); //malloc assigns memory to be allocated in bytes
    for (int i = 0; i < size; i++){         //a pointer can be assigned a certain amount of memory
        scanf("%d",&arr[i]);                   //making a pointer as if it is an array
    }
    if (arr == 0) // always check if memory allocation is successful to prevent run time errors
    {
       printf("invalid pointer. Error Allocating Memory\n");
       return -1;//means something when wrong
    }
    printf("Your array:\n");
    for (int i = 0; i < size; i++){
        printf("arr[%d] = %d",i,arr[i]); //if a null pointer is returned it means it wasn't able to give you a pointer because there's not enough memory to give
                                        
    }

    free(arr); //frees memory
                 //memory needs to be freed after defining to prevent running out of memory "Memory Leak"
    user *me = createUser("TedAthitakis",17,true);
    printf("%s is %d years old!",me->name,me->age);
    free (me);
    return 0;
}