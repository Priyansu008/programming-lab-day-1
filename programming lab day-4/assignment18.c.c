//date-01/09/25
//write a c program to check gratest among two numbers 
#include<stdio.h>
int main() {
	float num1,num2;
	printf("enter a number:");
	scanf("%f",&num1);
	printf("enter a number:");
	scanf("%f",&num2);
	if (num1>num2) {
		printf("%f is greater than %f",num1,num2);
	}
	else if (num2>num1) {
		printf("%f is greater than %f",num2,num1);
	}
	else {
		printf("both are equal");
	}
	return 0;
}
