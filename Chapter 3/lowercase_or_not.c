/*

65->90: A->Z
97->122: a->z

*/





#include <stdio.h>

int main(){
    char ch;

    printf("Enter a character.>>> ");
    scanf("%c", &ch);

    int chValue = (int) ch;

    if (chValue>=65 && chValue<=90){
        printf("%c is an uppecase character.\n", ch);
    }
    else if (chValue>= 97 && chValue<=122){
        printf("%c is a lowercase character.\n", ch);
    }
    else{
        printf("Please enter a valid character.\n");
    }

    return 0;
}