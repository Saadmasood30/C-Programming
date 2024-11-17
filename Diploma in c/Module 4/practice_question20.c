//Write a program that stores 6 integers in an array and then prints the elements in reverse order.

#include<stdio.h>

int main(void){
    int array[6];
    for(int i=1; i<=6; i++){
        printf("Enter number %d\n",i);
        scanf("%d",&array[i]);
    }
    for(int j=6; j>0; j--){
        printf("%d ",array[j]);
    }
    return 0;
}