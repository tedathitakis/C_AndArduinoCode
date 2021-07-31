#include <stdio.h>
#include <string.h>

int main(){
    char name[20]; // '\0' <-- to tell the computer where the string stops
    scanf("%19s",name); //assign character limit before 's'
                        // no '&' pointer needed because arrays decay to pointer when passed to function
//calculate length of the string 
    //count until the null character is reached
    int letter = 0;
    while(name[letter] != '\0'){
        letter++;
    }

    printf("Size of name is %d\n", letter);

    printf("Size of name is %lu\n", strlen(name)); //from string.h
                                        //strlen is unsigned long
    if (strcmp(name, "Ted") == 0){
        printf("the name is true");
    }
    
    char copy[20];
    char lastName[] = "Athitakis";
    strcpy(copy, name); //copying strings from library
    printf("Copy of name is %s\n", copy);
    strcat(copy, lastName); //concatinating strings from library
    printf("Full name: %s\n", copy);

    return 0;
}