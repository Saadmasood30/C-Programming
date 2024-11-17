//Write a program that stores 10 integers in an array, then finds and prints how many times each element appears in the array.

#include<stdio.h>

int main(void){
    int array[10];
    int repeat[10]={0};
    for(int i=0; i<10; i++){
        printf("Enter number %d\n", i+1);
        scanf("%d", &array[i]);}
    for(int k=0; k<10; k++){
        for(int j=0; j<10; j++){
        if(array[j]==array[k]){
            repeat[k]++;
        }
    }
        printf("The element %d appears %d times", array[k], repeat[k]);
    }
    return 0;
}