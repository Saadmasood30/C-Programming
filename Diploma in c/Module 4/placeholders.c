#include <stdio.h>

int main(void) {
    int age = 20;        // Declares an integer variable 'age' and initializes it to 20
    float gpa = 3.5;     // Declares a float variable 'gpa' and initializes it to 3.5
    char grade = 'A';    // Declares a char variable 'grade' and initializes it to 'A'

    printf("Age: %d\n", age);       // %d is a placeholder for int
    printf("GPA: %.2f\n", gpa);     // %.2f limits the float to 2 decimal places
    printf("Grade: %c\n", grade);   // %c is a placeholder for char
//Placeholders:
    // for integers we use: %i, %d
    // for decimals/fractions we use: %f(the number of dp should be written before f)
    // for characters we use: %c
    // for unsigned integers we use: %u
    // for a string of text we use: %s
    
    return 0;
}
