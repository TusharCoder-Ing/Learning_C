#include <stdio.h>

void array_reverse(int [], int);

int main(){
    int test_array[] = {1,2,3,4,5,6};
    int size_of_array = sizeof(test_array)/sizeof(test_array[0]);

    for(int i = 0; i<size_of_array; i++){
        printf("Value at index %d is %d\n", i, test_array[i]);
    }

    array_reverse(test_array, size_of_array);

    for(int i = 0; i<size_of_array; i++){
        printf("Value at index %d is %d\n", i, test_array[i]);
    }

    return 0;
}



void array_reverse(int a[], int size){
    int temp_array[size];

    for(int i=0;i<size;i++){
        temp_array[i] = a[i];
    }

    for(int i=0;i<size;i++){
        a[i] = temp_array[size-i-1];
    }
}