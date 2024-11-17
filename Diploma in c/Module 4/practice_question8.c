//Write a program that prompts the user to enter a letter grade (A, B, C, D, or F) and then displays a corresponding message:
//A: "Excellent"
//B: "Good"
//C: "Fair"
//D: "Needs Improvement"
//F: "Fail"
#include<stdio.h>

int main(void){
    char grade;
    printf("Enter your grade: \n");
    scanf("%c", &grade);
    if (grade=='A' || grade=='a'){
        printf("Excellent");
    }
    else if (grade=='B' || grade=='b'){
        printf("Good");
    }
    else if (grade=='C' || grade=='c'){
        printf("Fair");
    }
    else if (grade=='D' || grade=='d'){
        printf("Needs Improvement");
    }
    else {
        printf("Fail");
    }
}