/*

    Write a program to print multiplication table of 10 in reversed order.

*/

#include <stdio.h>

int main(){
    int number = 10, range;
    printf("Enter a range.>>> ");
    scanf("%d", &range);
    for(int i = range; i; i--){
        printf("%d time %d is %d\n", number, i, i*number);
    }
    return 0;
}