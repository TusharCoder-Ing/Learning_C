/*
    Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to a function and print its address. Are these addresses same? Why?
*/

#include <stdio.h>

void address(int*);//Function prototype

void address(int* a){
    *a = 56;
}


int main(){
    int i = 47;

    printf("The address of variable i, holding %d, is %p\n", i, &i);
    address(&i);

    printf("After running the func: %d", i);
    return 0;
}
