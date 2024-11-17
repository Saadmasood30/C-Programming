#include<stdio.h>

int main(void){
    int num1, num2, sum, difference, product;
    float quotient;
    printf("Enter number1: ");
    scanf("%d",&num1);
    printf("Enter number2: ");
    scanf("%d",&num2);
    sum=num1+num2;
    difference=num1-num2;
    product=num1*num2;
    quotient=num1/num2;
    printf("The sum is:%d\n",sum);
    printf("The differenvce is:%d\n",difference);
    printf("The product is:%d\n",product);
    printf("The quotient is:%.10f\n",quotient);
    return 0;
}