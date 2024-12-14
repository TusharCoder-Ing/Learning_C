/*
    Write a program to print the value of a variable i by using “pointer to pointer” type of variable
*/

#include <stdio.h>

int main(){
    int i = 47;

    int* ptr_i = &i;

    int** ptr_ptr_i = &ptr_i;

    printf("%d", **ptr_ptr_i);

    return 0;
}