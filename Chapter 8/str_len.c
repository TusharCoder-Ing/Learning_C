/*
    Write your own version of strlen function from <string.h>
*/

#include <stdio.h>
#include <string.h>

int string_length(char []);


int main(){
    char str[100];

    printf("Enter a string\n>>> ");
    gets(str);

    int length_func = string_length(str);

    int length_lib = strlen(str);

    printf("The length of %s is by strlen %d and %d by my function.", str, length_lib, length_func);
    return 0;
}

int string_length(char str[]){
    int len = 0;

    while(str[len] != '\0'){
        len++;
    }

    return len;
}