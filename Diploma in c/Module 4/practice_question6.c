#include<stdio.h>

int main(void){
    int score;
    printf("Enter your marks :");
    scanf("%d", &score);
    if (score>50){
        printf("Congratulations!!!!");
    }
    else {
        printf("Better luck next time :( ");
    }
    return 0;
}