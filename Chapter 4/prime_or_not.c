/*
    Write a program to check whether a given number is prime or not using loops.
*/

#include <stdio.h>

int main(){
    int number;
    printf("Enter a number.>>> ");
    scanf("%d", &number);
    int isPrime;
    
    if(number<=1){
        isPrime = 1;
    }
    else{
        for(int i = 2; i < number; i++){
            if (number%i ==0){
               isPrime = 0;
                break;
            }
            isPrime = 1;
        }
    }

    if(isPrime){
        printf("%d is a prime number", number);
    }
    else{
        printf("%d is not a prime number.", number);
    }
    return 0;
}