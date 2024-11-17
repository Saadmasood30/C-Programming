//Write a program that takes 5 integers from the user, stores them in an array, and then calculates and prints the sum of these integers.

#include<stdio.h>

int main(void){
    long int num[5], sum=0;
    for(int i=0; i<5; i++){
        printf("Enter numbers:\n");
        scanf("%d", &num[i]);
    }
    for(int j=0; j<5; j++){
        num[j];
        sum+=num[j];
    }
    printf("The sum of the integers in the array is %d", sum);
    return 0;
}