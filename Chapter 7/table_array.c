/*
    Repeat problem 3 for a general input provided by the user using scanf
*/

#include <stdio.h>

int main(){
    int num, test_array[10];

    printf("Enter a number.>>> ");
    scanf("%d", &num);

    for(int i=0;i<10;i++){
        test_array[i] = num*(i+1);
    }
    for(int i=0;i<10;i++){
        printf("%d times %d is %d\n", num, i+1, test_array[i]);
    }

    
    return 0;
}