#include<stdio.h>
int main() {
	int num,l1,l2;
	printf("enter the number :");
	scanf("%d",&num);
	l1=num%10;
	printf("last digit using modulus function : %d \n",l1); 
	l2=num-(num/10)*10;
	printf("last digit without using modulus function : %d",l2); 
	return 0;
}
