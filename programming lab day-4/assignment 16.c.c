//date-01/09/25
//write a c program to check whether roll no. 100 is present or not using if only
#include<stdio.h>
int main() {
	int roll;
	printf("enter any roll number :");
	scanf("%d",&roll);
	if (roll ==100) {
		printf("roll no. 100 is present");
	}
	if (roll != 100) {
		printf("roll no. 100 is not present");
		
	}
	return 0;
}
