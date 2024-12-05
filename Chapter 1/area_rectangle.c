#include <stdio.h>

int main(){
    int l;
    int b;
    printf("Enter the length of the rectangle\n>>> ");
    scanf("%d", &l);
    printf("Enter the breadth of the rectangle\n>>> ");
    scanf("%d", &b);
    printf("The area of a rectangle with length %d anf breadth %d is %d", l, b, l*b);
    return 0;
}