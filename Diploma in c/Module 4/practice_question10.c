//Write a program that takes an integer as input and prints all even numbers from 1 to that integer using a while loop.

#include<stdio.h>

int main(void){

    int num, i=1;
    printf("Enter number:\n");
    scanf("%d", &num);
    while (i<=num){
        if (i%2==0){
            printf("%d ",i);
            i++;
        }
        else {
            i++;
        }
    }
    return 0;
}