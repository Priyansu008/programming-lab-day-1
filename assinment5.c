//Date-11/08/2025
//WRITE A C PROGRAM TO FIND OUT ASCII VALUE OF A CHARACTER FROM THE USER

#include <stdio.h>
int main()  {
      char a;
      printf("Enter a character: ");
      scanf("%c", &a);
      printf("The ASCII value of '%c' is %d", a, a);
    return 0;
}