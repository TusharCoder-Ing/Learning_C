/*
    Write a program using function to print the following pattern (first n lines)
        *
        * * *
        * * * * *
        
        0 --> 1 star
        1 --> 3 star
        2 --> 5 star
        i --> 2*i+1 star
*/
#include <stdio.h>

int pyramid(int); //Function prototype

int main(){
    int n;
    printf("Enter the number of lines.>>> ");
    scanf("%d", &n);
    pyramid(n);
    return 0;
}

int pyramid(int n){
    for(int i=0; i<n; i++){
        for(int a=0; a<2*i+1; a++){
            printf("*");
        }
        printf("\n");
    }
}