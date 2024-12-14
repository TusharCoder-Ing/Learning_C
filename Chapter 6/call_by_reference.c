/*
    Write a function and pass the value by reference.
*/


#include <stdio.h>

int product(int*, int*); //Function prototype

int main(){
    int num1 = 5, num2 = 10;
    printf("5 times 10 is %d", product(&num1,&num2)); //Should print 10
    return 0;
}

int product(int* a, int* b){
    return (*a)*(*b);
} 