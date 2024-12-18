/*
    Create a 2-d array by taking input from the user. Write a display function to print the content of this 2-d array on the screen.
*/


#include <stdio.h>

int main(){
    int row, col;

    printf("ENTER\n");
    printf("Rows>>> ");
    scanf("%d", &row);
    printf("Columns>>> ");
    scanf("%d", &col);

    int  test_array[row][col];

    for(int a=0;a<row;a++){
        for(int b =0;b<col;b++){
            printf("Enter a value for row %d col %d\n>>> ", a, b);
            scanf("%d", &test_array[a][b]);
        }
    }
    for(int a=0;a<row;a++){
        for(int b =0;b<col;b++){
            printf("row %d col %d value %d\n", a, b, test_array[a][b]);
        }
    }

    return 0;
}