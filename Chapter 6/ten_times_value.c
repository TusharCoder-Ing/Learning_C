/*
    Write a program to change the value of a variable to ten times of its current value.
*/

#include <stdio.h>

void test(int*);

void test(int* a){
    *a *= 1
}

int main(){
    int i =47;
    test(&i);

    printf("Value of i is %d", i);
    
    return 0;
}