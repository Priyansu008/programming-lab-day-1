/*/*date-15/09/2025
write a c-program to find the sum of N no.of natural no.*/
#include<stdio.h>
int main(){
	int n,sum=0,i;
	printf("Enter the number of natural numbers to sum :");
	scanf("%d",&n);
	if (n<=0){
		printf("Please enter a positive integer.\n");
        return 1;
	}
	for(i=1;i<=n;i++){
		sum+=i;
	}
	  printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
