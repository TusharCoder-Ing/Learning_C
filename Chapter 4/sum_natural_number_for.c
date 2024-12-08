/*

    Write a program to sum first ten natural numbers using while loop

*/

#include <stdio.h>

int main(){
    int number, sum=0, i=0;
    printf("Enter a natural number.>>> ");
    scanf("%d", &number);

    while(i<=number){ 
        sum += i;
        i++;
    }
    printf("Sum is %d", sum);

    return 0;
}