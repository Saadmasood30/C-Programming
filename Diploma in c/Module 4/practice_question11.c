//Write a program to print the multiplication table of a number (from 1 to 10) entered by the user using a do-while loop.

#include<stdio.h>

int main(void){
    int num, i=1;
    printf("Enter number: \n");
    scanf("%d", &num);
    printf("This is the table of %d\n", num);
    do{
        printf("%d*%d=%d\n",num,i,num*i);
        i++;
    } while(i<=10);
    return 0;
}