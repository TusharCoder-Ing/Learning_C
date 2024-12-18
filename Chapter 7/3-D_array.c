/*
    Create a three–dimensional array and print the address of its elements in increasing order.
*/

#include <stdio.h>

int main()
{
    int array[3][3][3] = {
        {{56, 456, 45}, {45, 54, 35}, {456, 34, 23}},
        {{45, 43, 34}, {345, 345, 345}, {345, 2345, 34}},
        {{34, 34, 34}, {34, 34, 23}, {4356, 34, 645}}
        };

    printf("%d", array[1][2][1]);
    return 0;
}