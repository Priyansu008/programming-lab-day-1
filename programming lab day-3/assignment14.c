#include<stdio.h>
#include<math.h>
int main() {
	float num,f1,c1;
	printf("enter a number :");
	scanf("%f",&num);
	f1=floor(num);
	c1=ceil(num);
	printf("floor value is :%f",f1);
	printf("ceiling value is :%f",c1);
	return 0;
}
