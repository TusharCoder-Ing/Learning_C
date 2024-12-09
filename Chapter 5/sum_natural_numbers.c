/*
    Write a recursive function to calculate the sum of first ‘n’ natural numbers.
*/

#include <stdio.h>

int sum_of_natural_numbers(int); //Function Prototype

int main(){
    int number;
    printf("Enter a natural number.>>> ");
    scanf("%d", &number);


    if(number<=0){
        printf("A natural number cannot be 0 or negative. Try again.");
    }
    else{
     printf("The sum of first %d natural numberss is %d.", number, sum_of_natural_numbers(number));
    return 0;
    }
}

int sum_of_natural_numbers(int n){
    if(n == 1){
        return 1;
    }
    return n+sum_of_natural_numbers(n-1);

}