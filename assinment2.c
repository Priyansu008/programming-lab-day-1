//Date-11/08/2025
//WRITE A C PROGRAM TO ADD TWO FLOATING POINT NUMBERS 

#include <stdio.h>
int main() {
    float a, b, sum;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    sum = a+b ;
    printf("Sum = %f", sum); 
    return 0;
}