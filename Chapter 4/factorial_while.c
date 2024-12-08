#include <stdio.h>

int main(){
    int number, i=1;
    printf("Enter a number.>>> ");
    scanf("%d", &number);

    long long factorial = 1;

    while(i<=number){
        factorial *= i;
        i++;
    }

    printf("Factorial of %d is %d", number, factorial);


    return 0;
}