/*
    Write your own version of strcpy function from <string.h>
*/

#include <stdio.h>

int string_length(char []);
void string_copy(char [], char[]);


int main(){
    char string[] = "Hello world";
    int length = string_length(string);
    char test[100];

    string_copy(string,test);
    puts(test);
    return 0;
}


int string_length(char str[]){
    int len = 0;

    while(str[len] != '\0'){
        len++;
    }

    return len;
}

void string_copy(char source[], char target[]){
    int temp_len = string_length(source); 
    for(int i = 0; i<temp_len; i++){
        target[i] = source[i];
        if (i == temp_len-1){
            target[i+1] = '\0';
        }
    }
}