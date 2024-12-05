#include <stdio.h>

/*
    To convert celsius to fahrenheit:
    (c*9/5) + 32
*/

int main(){
    float celsius;
    printf("Enter the temperature in degree celsius\n>>> ");
    scanf("%f", &celsius);
    printf("%f degree celsius is the same as %f degree fahrenheit", celsius, (celsius*9/5)+32);
    return 0;
}