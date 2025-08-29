#include<stdio.h>
int main() {
   float l,b,p,a;
   printf("enter the length of a rectangle :");
   scanf("%f",&l);
   printf("enter the breadth of a rectangle :");
   scanf("%f",&b);
   p=2*(l+b);
   a=l*b;
   printf("perimeter of the rectangle is %f \n",p);
   printf("area of the rectangle is %f \n",a);
   return 0;
}
