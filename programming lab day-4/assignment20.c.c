//date-01/09/25
//write a c program to check whether a number is whole number or not
#include<stdio.h>
int main() {
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if (num>=0) {
		printf("%d is a whole number",num);
	}
	else {
		printf("%d is not a whole number",num);
		
	}
	return 0;
}
