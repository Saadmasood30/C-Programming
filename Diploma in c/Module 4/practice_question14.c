//Write a program that takes a number as input and prints whether each number from 1 to that number is even or odd.

#include<stdio.h>

int main(void){
    int num, i=1;
    printf("Enter number: \n");
    scanf("%d", &num);
    while (i<=num){
        if (i%2==0){
            printf("%d is even\n",i);
            i++;
        }
        else {
            printf("%d is odd\n",i);
            i++;
        }
    }
    return 0;
}