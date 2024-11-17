//Write a program to calculate the factorial of a number entered by the user using a for loop.

#include<stdio.h>

int main(void){
    int num, factorial=1;
    printf("Enter number: \n");
    scanf("%d", &num);
    for(num;num>=1;num--){
        factorial*=num;
    }
    printf("The factorial of %d is %d", num, factorial);
    return 0;
}