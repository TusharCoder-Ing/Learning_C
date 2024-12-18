/*
    Write a program to encrypt a string by adding 1 to the ascii value of its characters. Write a program to decrypt the string encrypted using encrypt function in problem 6(THIS ONE)
*/

#include <stdio.h>
void encrypt(char[]);
void decrypt(char[]);

int main(){
    char string[] = "Hello world";
    encrypt(string);

    puts(string);

    decrypt(string);

    puts(string);

    return 0;
}

void encrypt(char str[]){
    for(int i=0;i<11;i++){
        str[i]++;
    }
}

void  decrypt(char str[]){
    for(int i =0; i<11;i++){
        str[i]--;
    }
}