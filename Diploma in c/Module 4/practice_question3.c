#include<stdio.h>

int main(void){
    char name[50];
    int age;
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your name is %s, and your age is % d",name , age);
    return 0;
}