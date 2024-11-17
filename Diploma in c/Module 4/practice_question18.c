//Write a program that stores 10 integers in an array (taken from the user) and then finds and prints the largest and smallest number in the array.

#include<stdio.h>

int main(void){
    int array[10], largest=0, smallest=0;
    for(int i=0; i<10; i++){
        printf("Enter number:\n");
        scanf("%d", &array[i]);
    }
    for(int j=0; j<10; j++){
        largest=array[0];
        smallest=array[0];
        if (array[j]>largest){
            largest=array[j];
        }
        if (array[j]<smallest){
            smallest=array[j];
        }
    }
    printf("The largest number is %d\n", largest);
    printf("The smallest number is %d\n", smallest);
    return 0;
}