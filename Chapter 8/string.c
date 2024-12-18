/*
    Write a program to take string as an input from the user using %c and %s confirm that the strings are equal.
*/

#include <stdio.h>

int main(){
    char str[50];
    printf("Enter a string.\n>>> ");
    gets(str);


    printf("Via loop aka %%c");
    for(int i = 0; i<50; i++){
        if(&str[i] == ""){
            continue;
        }
        printf("%c", str[i]);
    }

    printf("Via %%s");
    printf("%s", str);


    return 0;
}