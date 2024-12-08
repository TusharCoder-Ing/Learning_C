/*

    Write a program to implement sum of natural numbers using ‘for’ and ‘do-while’ loop.

*/

#include <stdio.h>

int main(){
    int number, sum=0, i=0;
    printf("Enter a natural number.>>> ");
    scanf("%d", &number);

    char mode;
    printf("Enter a mode. f for \"for\" loop and d for \"do while\" loop.>>> ");
    scanf(" %c", &mode);

    if (mode == 'f' || mode == 'F'){
        for(i; i<= number; i++){
            sum += i;
        }
        printf("Sum is %d", sum);
    }
    else if(mode == 'd' || mode == 'D'){
        do{
            sum+= i;
            i++;
        }while(i<=number);
        printf("Sum is %d", sum);
    }


    return 0;
}