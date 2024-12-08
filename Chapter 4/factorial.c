/*
    Write a program to calculate the factorial of a given number using a for loop.

    factorial:
    n = n*(n-1)*(n-2).... until 0
*/

#include <stdio.h>

int main(){
    int number;
    printf("Enter a number.>>> ");
    scanf("%d", &number);

    long number_factorial = number;

    if(number == 0){
        number_factorial = 1;
    }
    else{
        for(int i = 1; i<number; i++){
        number_factorial *= i;
    }
    printf("Factorial of %d is %d", number, number_factorial);
    }
    return 0;
}