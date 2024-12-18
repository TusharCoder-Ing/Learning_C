/*
    Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively
*/


#include <stdio.h>

int main(){
    int tables[3][10];

    for(int a = 0; a<10;a++){  //Table of 2
        tables[0][a] = 2*(a+1); 
    }
    for(int b = 0; b<10;b++){  //Table of 7
        tables[1][b] = 7*(b+1); 
    }
    for(int c = 0; c<10;c++){  //Table of 9
        tables[2][c] = 9*(c+1); 
    }



    for(int a = 0; a<10;a++){  //Table of 2
        printf("2 times %d is %d\n", a+1, tables[0][a]);
    }
    for(int b = 0; b<10;b++){  //Table of 7
        printf("7 times %d is %d\n", b+1, tables[1][b]);
    }
    for(int c = 0; c<10;c++){  //Table of 9
        printf("9 times %d is %d\n", c+1, tables[2][c]); 
    }



    
    return 0;
}