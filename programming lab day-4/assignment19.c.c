//date-01/09/25
// A COIN HAS BEEN TOSSED ONCE .write a c program to check whether it is head or tail
#include<stdio.h>
int main() {
	char ch;
	printf("enter head or tail(H/T):");
	scanf("%c",&ch);
	if (ch=='H'|| ch=='h') {
		printf("head occurs");
	}
	else if (ch=='T'|| ch=='t') {
		printf("tail occurs");
	}
	else {
		printf("invalid input");
	}
	return 0;
}
