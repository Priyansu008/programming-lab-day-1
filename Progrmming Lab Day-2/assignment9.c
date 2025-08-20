
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping (using third variable): a = %d, b = %d \n", a, b);
    c = a;
    a = b;
    b = c;
    printf("After swapping (using third variable): a = %d, b = %d \n", a, b);
    return 0;
}
