//Write a program to sum the first n natural numbers using a for loop. For example, if the user enters 5, the program should calculate 1+2+3+4+5=15 

#include<stdio.h>

int main(void){
    int num, sum=0;
    printf("Enter number:\n");
    scanf("%d", &num);
    for(int i=1;i<=num; i++){
        sum+=i;
    }
    printf("The sum of the first n numbers of %d is %d",num, sum);
    return 0;
}