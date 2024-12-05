#include <stdio.h>
// Calculate the volume of a cylinder
int main(){
    int r;
    int h; 
    float pi = 3.14159;
    printf("Enter the raduis of the cylinder\n>>> ");
    scanf("%d", &r);
    printf("Enter the height of the cylinder\n>>> ");
    scanf("%d", &h);
    printf("The volume of a cylinder with radius %d and height %d is %f", r, h, pi*r*r*h);
    return 0;

}