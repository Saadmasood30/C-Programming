#include<stdio.h>

int main(void){
    int count, j=0, num;
    //syntax for print:
    printf("Enter the value of count:\n");
    //syntax for entering data or using the scan operation:
    scanf("%d", &count); // %d for integer, &age stores the input in 'age'
    printf("the value of count is %d ", count);
    //syntax for if-else statements:
    //if (condition) {
    // Code to execute if condition is true}
    // else {
    // Code to execute if condition is false}
    if(count>5){
        printf("and Saad is awesome\n");
    }
    else {
        printf("and Saad is helpful\n");
    }
    //Loops;
    //syntax of for loop:
    //for (initialization; condition; increment) {
    // Code to repeat}
    for (int i=0; i<=20; i++) {
        printf("%d ", i);
    }
    //syntax for while loop:
    //while (condition) {
    // Code to repeat}
    while(j<count){
        j++;
        printf("%d", j);
    }
    //syntax for do-while loop:
    //do {
    // Code to execute
    //} while (condition);
    do {
        printf("enter a number:");
        scanf("%d", &num);
    } while(num>25);
        printf("Your number is %d", num);
    // syntax of arrays:
    //data_type array_name[size]; //data_type is the type of elements (e.g., int, float, char) //array_name is the name of the array. //size is the number of elements the array can hold.
    int numbers[5] = {1, 2, 3, 4, 5};
    printf("%d", numbers[0]); // This will print the first element, 1
    int numberss[5];  // Declare an array of 5 integers

    // Taking input for the array
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numberss[i]);  // Store each input in the array
    }

    // Printing the array elements
    printf("The elements in the array are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numberss[i]);  // Access each element by its index
    }
    printf("\n");
   
    return 0;
}