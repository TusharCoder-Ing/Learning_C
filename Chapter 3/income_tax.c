/*

    Calculate income tax paid by an employee to the government as per the slabs
    mentioned below:
        Income Slab Tax
            2.5 – 5.0L 5%
            5.0L - 10.0L 20%
            Above 10.0L 30%
    Note that there is no tax below 2.5L. Take income amount as an input from the user.

*/


#include <stdio.h>

int main(){
    float salary_in_lakhs, tax;
    printf("Enter your salary in lakhs.>>> ");
    scanf("%f", &salary_in_lakhs);
    if(salary_in_lakhs < 2.50){
        printf("NO TAX!");
    }
    else if(salary_in_lakhs <= 5.00){
        tax = (0.05*(salary_in_lakhs-2.50))*100000;
        printf("5%% tax is to be paid. For %.2f lakhs, it comes out to be %.2f", salary_in_lakhs, tax);
    }
    else if(salary_in_lakhs <= 10.00){
        tax = ((0.05*2.50) + (0.20*(salary_in_lakhs-5.00)))*100000;
        printf("20%% tax is to be paid. For %.2f lakhs, it comes out to be %.2f", salary_in_lakhs, tax);
    } 
    else if(salary_in_lakhs > 10.00){
        tax = ((0.05*2.50) + (0.20*(5.00)) + (0.30*(salary_in_lakhs-10.00)))*100000;
        printf("30%% tax is to be paid. For %.2f lakhs, it comes out to be %.2f", salary_in_lakhs, tax);
    }
    return 0;
}
