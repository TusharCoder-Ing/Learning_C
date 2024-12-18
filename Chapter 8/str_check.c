/*
    Write a program to check whether a given character is present in a string or not.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>



int check(char[], char);


int main(){
    char string[50], to_find;
    printf("Enter a string.\n>>>");
    gets(string);


    printf("Enter a character to find.\n>>>");
    scanf(" %c", &to_find);

    int is_present = check(string, to_find);
    if(is_present){
        printf("%c is present in %s", to_find, string);
    }
    else{
        printf("%c is NOT present in %s", to_find, string);
    }

    return 0;
}


int check(char str[], char target){
    for(int i=0; i<strlen(str); i++){
        if(tolower((unsigned char)str[i]) == tolower((unsigned char)target)){
           return 1;
        }
        else if(i==strlen(str)-1){
            return 0;
        }
    }
}