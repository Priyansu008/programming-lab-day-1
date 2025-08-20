#include <stdio.h>
int main() {
    float a,c,b,f;
    printf("Enter temperature in fahrenheit:");
    scanf("%f", &a);
    c = (a- 32)* 5 / 9;
    printf("Temperature in Celsius = %f \n", c);
    printf("Enter temperature in Celsius: ");
    scanf("%f", &b);
    f= (b * 9 / 5) + 32;
    printf("Temperature in Fahrenheit = %f ", f);
    return 0;
}

