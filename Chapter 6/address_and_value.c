/*
    Write a program to print the address of a variable. Use this address
    to get the value of the variable.
*/

#include <stdio.h>

int main(){
    int n = 47;
    int* address_n = &n;
    printf("The value of n is %d but its address is %p.\n", n, address_n);
    printf("The address_n varible stores the address of n, that is, %p which points to the value of %d\n", address_n, *address_n);
    return 0;
}