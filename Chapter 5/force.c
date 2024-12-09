/*
    Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
    earth. Consider g = 9.8m/s2.

*/

#include <stdio.h>

float force_on_earth(float);

float gravity = 9.8;

int main(){
    float mass;
    
    printf("Enter the mass of the body in kilograms.>>> ");
    scanf("%f", &mass);

    printf("The force on a %.1f kg body will be %.2f N", mass, force_on_earth(mass));

    return 0;
}

float force_on_earth(float m){
    return m*gravity;
}