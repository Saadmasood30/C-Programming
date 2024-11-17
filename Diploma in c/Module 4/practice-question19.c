//Write a program that stores 10 integers in an array, counts how many are even and how many are odd, and prints the results.

#include<stdio.h>

int main(void){

    int array[10], even=0, odd=0;

    for(int i=0; i<10; i++){
        printf("Enter number %d:\n",i+1);
        scanf("%d", &array[i]);
    }
    for(int j=0; j<10; j++){
        if(array[j]%2==0){
            even++;
        }
        else {
            odd++;
        }
    }
    printf("The number of even numbers is: %d\n", even);
    printf("The number of odd numbers is: %d\n",odd);
    return 0;

}