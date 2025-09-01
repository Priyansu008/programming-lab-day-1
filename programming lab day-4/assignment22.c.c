//date-01/09/25
//write a c program to check maximum among three numbers using ladder-if-else
#include<stdio.h>
int main() {
	float num1,num2,num3;
	printf("enter a number:");
	scanf("%f",&num1);
	printf("enter a number:");
	scanf("%f",&num2);
	printf("enter a number:");
	scanf("%f",&num3);
	if (num1>num2 && num1>num3) {
		printf("%f is maximum",num1);
	}
	else if (num2>num1 && num2>num3) {
		printf("%f is maximum",num2);
	}
	else {
		printf("%f is maximum",num3);
	}
	return 0;
}
