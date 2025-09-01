//date-01/09/25
//write a c program to check whether a integer is odd or even
#include<stdio.h>
int main() {
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if (num%2==0) {
		printf("%d is an even number.",num);
	}
	else {
		printf("%d is an odd number.",num);
		
	}
	return 0;
}
