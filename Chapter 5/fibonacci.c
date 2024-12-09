/*
    Write a program using recursion to calculate nth element of Fibonacci series.
*/

#include <stdio.h>

int fibonacci(int); //Function prototype

int main(){

    int user_number;
    printf("Enter a number.>>> ");
    scanf("%d", &user_number);

    if(user_number<0){
        printf("Please enter a positive number.");
    }
    else{
        printf("The Fibonacci number for %d is %d.", user_number, fibonacci(user_number));
    }
    return 0;
}

int fibonacci(int number){
    if(number == 0){
        return 0;
    }
    else if(number == 1){
        return 1;
    }
    return fibonacci(number-1)+fibonacci(number-2);
}