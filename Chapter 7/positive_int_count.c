/*
    Write a program containing functions which counts the number of positive integers in an array.
*/



#include <stdio.h>


int sum_natural_numbers(int array[], int s);


int main(){
    int size;

    printf("Please specify the size of the array.>>> ");
    scanf("%d", &size);

    int array[size];

    for(int i=0;i<size;i++){
        printf("Enter element %d>>> ", i+1);
        scanf("%d", &array[i]);
    }

    printf("There are %d positive numbers in the given array.", sum_natural_numbers(array, size));



    return 0;
}


int sum_natural_numbers(int array[], int s){
    int count = 0;
    for(int i=0;i<s;i++){
        if(array[i] > 0){
            count++;
        }
    }
    return count;
}