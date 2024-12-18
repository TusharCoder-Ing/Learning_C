/*
    Write a program to count the occurrence of a given character in a string
*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>


int count(char [], char);


int main(){
    char string[50], to_count;
    printf("Enter a string.\n>>>");
    gets(string);

    printf("Enter the charater to count.\n>>> ");
    scanf(" %c", &to_count);


    count(string, to_count) <= 1 ? printf("%c comes %d time in %s.", to_count, count(string, to_count), string) : printf("%c comes %d times in %s.", to_count, count(string, to_count), string);

    return 0;
}
int count(char str[], char target){
    int count = 0;
    for(int i=0; i<strlen(str); i++){
        if(tolower((unsigned char)str[i]) == tolower((unsigned char) target)){
            count++;
        }
    }
    return count;
}