#include <stdio.h>


void test(int);

void test(int a){

    printf("Address of the passed i: %p\n", &a);
}
int main(){
    int i = 5;
    printf("Address of i in main function: %p\n", &i);
    test(i);
    return 0;
}