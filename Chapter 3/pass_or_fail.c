/*

    Write a program to determine whether a student has passed or failed. To pass, a student requires a total of 40% and at least 33% in each subject. Assume there are three subjects and take the marks as input from the user.

*/

#include <stdio.h>

int main(){
    int marks_science;
    int marks_mathematics;
    int marks_social_science;


    //Get the user's marks
    printf("Enter your marks out of 100\n");
    printf("Mathematics>>> ");
    scanf("%d", &marks_mathematics);
    printf("Science>>> ");
    scanf("%d", &marks_science);
    printf("Social science>>> ");
    scanf("%d", &marks_social_science);


    //Check if the marks entered were valid. Should be b/w 0-100
    if (marks_mathematics <= 100 && marks_science <= 100 && marks_social_science <= 100){
        //Check if they got <33% in individual subjects
        if (marks_mathematics < 33 || marks_science < 33 || marks_social_science <33){
            printf("You have scored less than 33%% in one more more than one subject(s). FAILED.\n");
            
        }
        //Check if they got the passing percentage
        else if((marks_mathematics+marks_science+marks_social_science)/3 >= 40){
            printf("You PASS with %.2f%%!",  ((float) marks_mathematics+ (float) marks_science+ (float) marks_social_science)/3);
        }
        //Fail them if they didnt
        else{
            printf("You FAIL with %.2f%%. You require atleast 40%% to pass.", ((float) marks_mathematics+ (float) marks_science+ (float) marks_social_science)/3);
        }
    }
    //If they didnt enter valid marks
    else{
        printf("Invalid marks entered.");
    }
    return 0;
}