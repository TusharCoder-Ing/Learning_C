/*

    Write a program to print multiplication table of a given number n.

*/

#include <stdio.h>

int main(){
    int n, range;
    printf("Enter a number.>>> ");
    scanf("%d", &n);
    printf("Enter a range.>>> ");
    scanf("%d", &range);

    for(int i = 1; i<= range;i++){
        printf("%d times %d is %d\n", n, i, i*n);
    }
    return 0;
}