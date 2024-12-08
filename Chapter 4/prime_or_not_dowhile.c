#include <stdio.h>

int main(){
    int number;
    printf("Enter a number.>>> ");
    scanf("%d", &number);

    int i =2, isPrime;
    if(number<=1){
        isPrime = 1;
    }
    else{
        do{
            if(number%i==0){
                isPrime = 0;
                break;
            }
            isPrime = 1;
            i++;
        }while(i<number-1);
    }

    if(isPrime){
        printf("%d is a prime number", number);
    }
    else{
        printf("%d is not a prime number.", number);
    }
    return 0;
}