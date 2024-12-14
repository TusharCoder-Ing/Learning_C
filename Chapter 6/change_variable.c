/*
    Write a program to change the value of a variable to ten times of its current value.
*/

#include <stdio.h>

void change(int*);

void change(int* a){
    *a *= 10; 
}

int main(){
    int n = 10;

    change(&n);
    printf("%d", n);
    return 0;
}