//Create a program using a for loop to calculate the factorial of a number entered by the user.
#include<stdio.h>

int main(void){
    int num, factorial=1;
    printf("Enter your number:");
    scanf("%d", &num);
    for(num; num>=1; num--){
        factorial*=num;    
    }
    printf("The factorial is: %d", factorial);
    return 0;
}
