//date-01/09/25
//write a c program to check if a letter is vowel or consonant using ladder-if-else
#include<stdio.h>
int main() {
	char ch;
	printf("enter a character :");
	scanf("%c",&ch);
	if (ch=='a'|| ch=='A') {
		printf("%c is a vowel \n",ch);
    }
	else if (ch=='e'|| ch=='E') {
		printf("%c is a vowel \n",ch);
    }
	else if (ch=='i'|| ch=='I') {
		printf("%c is a vowel \n",ch);
    }
	else if (ch=='o'|| ch=='O') {
		printf("%c is a vowel \n",ch);
	}
	else if (ch=='u'|| ch=='U') {
		printf("%c is a vowel \n",ch);
	}
	else {
		printf("%c is not a vowel \n",ch);
	}
	return 0;
}
	
