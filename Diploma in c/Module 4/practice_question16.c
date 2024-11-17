//Write a program to find the smallest of five numbers entered by the user.

#include<stdio.h>

int main(void){

    int num, smallest;
    printf("Enter number: \n");
    scanf("%d", &smallest);
    for(int i=1; i<5; i++){
        printf("Enter number: \n");
        scanf("%d", &num);
        if (num<smallest){
            smallest=num;
        }   
    }
    printf("%d is the smallest number", smallest);
    return 0;
}