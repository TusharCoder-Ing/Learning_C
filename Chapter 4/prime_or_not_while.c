#include <stdio.h>

int main(){
    int number;
    printf("Enter a number.>>> ");
    scanf("%d", &number);

    int isPrime;

    int i =2;
    if (number<=1){
        isPrime = 1;
    }
    else{
        while(i<number){
            if(number%i==0){
                isPrime = 0;
                break;
            }
            isPrime = 1;
            i++;
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