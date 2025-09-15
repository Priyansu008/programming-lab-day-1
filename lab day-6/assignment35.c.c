#include <stdio.h>
int main() {
    int start, end, isPrime, i, j;
    printf("Enter the starting number of the range: ");
    scanf("%d", &start);
    printf("Enter the ending number of the range: ");
    scanf("%d", &end);
    if (start > end || start < 0) {
        printf("Invalid range. Please enter a valid range where start <= end and start >= 0.\n");
        return 1;
    }
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (i = start; i <= end; i++) {
        if (i <= 1) 
            continue; 
        isPrime = 1; 
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;  
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

