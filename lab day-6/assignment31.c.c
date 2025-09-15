/*date-15/09/2025
write a c-program to print a multiplication table*/
#include<stdio.h>
int main(){
	int n,i=0;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		printf("%d\n",n*i);
	}
	return 0;
}


