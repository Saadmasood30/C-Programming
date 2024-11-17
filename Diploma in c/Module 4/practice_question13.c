//Write a program that prompts the user to enter numbers until they enter a negative number, then prints the sum of all positive numbers entered.

#include<stdio.h>

int main(void){
    int num=0, sum=0;
    while (num>=0){
    printf("Enter number: \n");
    scanf("%d", &num);
    sum+=num;}
    printf("The sum of all the positive numbers entered is %d",sum);
    return 0;
}