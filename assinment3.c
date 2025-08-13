//Date-11/08/2025
//WRITE A C PROGRAM TO SUBTRACT TWO FLOATING POINT NUMBERS 

#include <stdio.h>
int main()  {
    float a, b, diff;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    diff = a-b ;
    printf("diff = %f", diff); 
    return 0;
}