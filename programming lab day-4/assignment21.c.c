//date-01/09/25
//write a c program to check whether it is leap year or not using ladder-if-else
#include<stdio.h>
int main() {
	int year;
	printf("enter the year:");
	scanf("%d",&year);
	if (year%400==0) {	
	   printf("%d is a leap year",year);
	}
	else if (year%100!=0) {
		printf("%d is not a leap year",year);
	}
	else if (year%4==0) {
		printf("%d is a leap year",year);
	}
	else {
		printf("%d is a leap year",year);
	}
	return 0;
}
