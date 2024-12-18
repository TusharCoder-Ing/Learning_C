#include <stdio.h>
#include <string.h>

int main(){
    char test[]= "Hello there";
    slice(test, 1, 4);
    puts(test);
    return 0;
}