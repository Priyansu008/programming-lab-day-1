#include<stdio.h>
#include<math.h>
int main() {
    float p,r,t,a,ci,amt;
	printf("enter the principal amount :");
	scanf("%f",&p);
	printf("enter the rate of interest :");
	scanf("%f",&r);
	printf("enter the time(in years) :");
	scanf("%f",&t);
	a=1+(r/100);
    amt=p*pow(a,t);
	ci=p-amt;
	printf("compound interest is %f",ci);
	return 0;
}
