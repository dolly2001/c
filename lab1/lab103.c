#include <stdio.h>

int main(){

    // Data Type like a container for different kind of values
    // and variables are the name of the container.
    // int; -> For numbers
    // float; -> For Decimal Numbers
    // double; -> For bigger decimal numbers
    // char; -> For characters/Alphabets such as A a.

    // Format Specifiers helps to identify the data types [(%d, int), (%f, float, double), (%c, char)]
    // NOTE : %f by default print number upto 6 decimal points for smallar number use %.1f, %.2f and for bigger number use %.7f, %.6f.
    int age = 22;
    printf("%d is your age", age);
    putchar(10);

    float CGPA = 7.77;
    printf("%.2f is your CGPA", CGPA);
    putchar(10);

    double random_number = 23456789.987654321;
    printf("%f is a random number", random_number);
    putchar(10);

    char grade = 'A';
    printf("Your grade is : %c ", grade);

    return 0;
}