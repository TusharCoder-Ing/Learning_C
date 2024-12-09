/*
    Write a program using function to find average of three numbers.
*/

#include <stdio.h>

float average(float, float, float); //Function Prototype


int main(){
    float num1,num2,num3;
    printf("Enter first number.>>> ");
    scanf("%f", &num1);
    printf("Enter second number.>>> ");
    scanf("%f", &num2);
    printf("Enter third number.>>> ");
    scanf("%f", &num3);

    printf("The average of %.2f, %.2f and %.2f is %.2f", num1, num2, num3, average(num1,num2,num3));
    return 0;
}

//Function definition
float average(float a, float b, float c){
    return (a+b+c)/3;
}