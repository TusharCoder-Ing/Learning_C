#include <stdio.h>

/*
    SI = (principal*rate of interest*time)/100
*/

int main(){
    int principal;
    float rate_of_interest;
    int time;
    printf("Enter the principal amount invested.\n>>> ");
    scanf("%d", &principal);
    printf("Enter the rate of invesment in percentage.\n>>> ");
    scanf("%f", &rate_of_interest);
    printf("Enter the time period.\n>>> ");
    scanf("%d", &time);
    printf("%d invested for a period of %d years at %f percent would yeild %f in simple interest and the total investment would be %f.", principal, time, rate_of_interest, (principal*time*rate_of_interest)/100, ((principal*time*rate_of_interest)/100)+principal);
    return 0;
}