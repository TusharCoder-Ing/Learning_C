/*
    Repeat problem 7 for a custom input given by the user
*/

#include <stdio.h>

int main(){
    int n1, n2, n3, tables[3][10];

    printf("Enter first number>>> ");
    scanf("%d", &n1);
    printf("Enter second number>>> ");
    scanf("%d", &n2);
    printf("Enter third number>>> ");
    scanf("%d", &n3);


    for(int a = 0; a<10;a++){ 
        tables[0][a] = n1*(a+1); 
    }
    for(int b = 0; b<10;b++){  
        tables[1][b] = n2*(b+1); 
    }
    for(int c = 0; c<10;c++){ 
        tables[2][c] = n3*(c+1); 
    }


     for(int a = 0; a<10;a++){  //Table of 2
        printf("%d times %d is %d\n",n1,  a+1, tables[0][a]);
    }
    for(int b = 0; b<10;b++){  //Table of 7
        printf("%d times %d is %d\n",n2 ,  b+1, tables[1][b]);
    }
    for(int c = 0; c<10;c++){  //Table of 9
        printf("%d times %d is %d\n",n3 ,  c+1, tables[2][c]); 
    }



    return 0;
}