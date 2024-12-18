/*
    Write a function slice() to slice a string. It should change the original string such
    that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position
    for slice
*/

#include <stdio.h>
#include <string.h>

void str_slice(char[], int, int);

int main(){
    char string[] = "Meloncholy";

    

    str_slice(string, 1, 6);

    printf("%s", string);

    
    return 0;
}

void str_slice(char str[], int a, int b){ //a is the starting index and b is the last index. This fun will go from a->b-1
    char sliced_str[50];
    int index_count = 0;

    for(int i = a; i<b; i++){
        sliced_str[index_count] = str[i];
        index_count++;
        if(i == b-1){
            sliced_str[index_count] = '\0';
            break;
        }
    }

    for(int j=0;j<strlen(sliced_str);j++){
        str[j] == sliced_str[j];
        if(j == strlen(sliced_str)-1){
            str[j+1] = '\0';
            break;
        }
    }

}
