/*write a c-progrm to find the sum of first 10 even natural numbers using functions*/
#include <stdio.h>
int sumEvenNumbers() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += 2 * i;  
    }
    return sum;
}
int main() {
    int result = sumEvenNumbers();
    printf("The sum of the first 10 even natural numbers is: %d\n", result);
    return 0;
}
