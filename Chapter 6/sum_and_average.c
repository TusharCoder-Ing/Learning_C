/*
    Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().
*/

#include <stdio.h>

int sum(int*,int*);

int average(int*,int*);

int main(){
    int num1,num2;

    printf("Enter first number>>> ");
    scanf("%d", &num1);
    printf("Enter Second number>>> ");
    scanf("%d", &num2);


    printf("%d plus %d is %d\n", num1,num2, sum(&num1,&num2));
    printf("Average of %d and %d is %d\n", num1,num2, average(&num1,&num2));

    return 0;
}


int sum(int* a, int* b){
    return (*a)+(*b);
}
int average(int* a, int* b){
    return ((*a)+(*b))/2;
}