//Write a program that stores 8 float numbers in an array, calculates their average, and prints it.

#include<stdio.h>

int main(void){
    float array[8];
    float average=0;
    for(int i=1; i<9; i++){
        printf("Enter number %d\n", i);
        scanf("%f", &array[i]);
    }
    for(int j=1; j<9; j++){
        average+= array[j];
    }
    printf("This is the total average: %f ", average/8);
    return 0;
}