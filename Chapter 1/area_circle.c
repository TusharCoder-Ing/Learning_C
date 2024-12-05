#include <stdio.h>
// Calculate the area of a circle
int main(){
    int r;
    float pi = 3.14159;
    printf("Enter the raduis of the cylinder\n>>> ");
    scanf("%d", &r);
    printf("The area of a circle with radius %d is %f", r, pi*r*r);
    return 0;

}