/*
 Write a function to convert Celsius temperature into Fahrenheit and vice versa
*/

#include <stdio.h>

float celsius_to_fahrenheit(float); //Function Prototype
float fahrenheit_to_celsius(float);

int main(){
    float temp;
    char mode;
    printf("Enter the temperature>>> ");
    scanf("%f", &temp);

    printf("Choose your mode(C to change into celsius, or F to change into fahrenheit>>> ");
    scanf(" %c", &mode);

    if(mode == 'c' || mode == 'C'){
        printf("%.2f degree celsius is the same as %.2f degree fahrenheit.", temp, fahrenheit_to_celsius(temp));
    }
    else if(mode == 'f' || mode == 'F'){
        printf("%.2f degree fahrenheit is the same as %.2f degree celcius.", temp, celsius_to_fahrenheit(temp));
    }
    else{
        printf("Invalid mode.");
    }
    
    return 0;
}

float celsius_to_fahrenheit(float c){
    float f = (c*9.00/5.00)+32;
    return f;
}

float fahrenheit_to_celsius(float f){
    float c = (f-32)*5.00/9.00;
    return c;
}