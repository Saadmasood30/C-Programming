//Write a program that prompts the user to guess a secret number. Use a do-while loop to keep asking until they guess it correctly, then display a success message.

#include<stdio.h>

int main(void){
    int num, secret_number=18;
   
    do {
        printf("Guess the secret number:\n");
        scanf("%d", &num);
    } while(num!=secret_number);
    printf("Yayyyy!! you guessed the number correctly");
    return 0;
}