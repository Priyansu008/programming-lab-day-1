//08/09/2025
//write a c-programthat calculates the total salary of an employee
#include <stdio.h>

int main() {
	float basic,hra,ta,da,gross;
	printf("enter basic salary of an employee:");
	scanf("%f",&basic);
	if(basic>15000){
		hra=0.2*basic;
		printf("hra is %f\n",hra);
	}
	else{
		printf(" no hra will be given \n");
	}
	ta=0.1*basic;
	printf("ta is %f\n",ta);
	da=0.05*basic;
	printf("da is %f\n",da);
	gross=basic+hra+ta+da;
	printf("total salary of the employee is: %f\n",gross);
	return 0;
}
