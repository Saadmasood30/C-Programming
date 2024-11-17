#include<stdio.h>

int main(void){
    int num1, num2, num3;
    printf("Enter number 1:");
    scanf("%d", &num1);
    printf("Enter number 2:");
    scanf("%d", &num2);
    printf("Enter number 2:");
    scanf("%d", &num3);
    if ((num1>num2 && num1>num3)||(num1>num2 && num2==num3)){
        printf("Number 1 is the greatest");
    }
    else if ((num2>num1 && num2>num3)||(num2>num1 && num1==num3)){
        printf("Number 2 is the greatest");
    }
    else if ((num3>num1 && num3>num2)||(num3>num1 && num1==num2)){
        printf("Number 3 is the greatest");
    }
    else 
    printf("There are more than one greater numbers");
    return 0;
}