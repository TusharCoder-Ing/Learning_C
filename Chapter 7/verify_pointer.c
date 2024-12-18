/*
    Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
    to the third element where ptr is a pointer pointing to the first element of the
    array.
*/


#include <stdio.h>

int main(){
    int test_array[10];

    for(int a=0;a<10;a++){
        test_array[a] = a+1;
    }

    int* ptr = test_array;

    printf("%d", *(ptr+2)); // p + 2 -> 3rd index -> 3

    return 0;
}   