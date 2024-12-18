/*
    Write a program to create an array of 10 integers and store multiplication table of 5 in it.
*/

#include <stdio.h>

int main(){
    int test_array[10];

    for(int i=0;i<10;i++){
        test_array[i] = 5*(i+1);
    }
    for(int i=0;i<10;i++){
        printf("5 times %d is %d\n", i+1, test_array[i]);
    }

    
    return 0;
}