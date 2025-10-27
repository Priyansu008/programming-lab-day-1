#include <stdio.h>

int main() {
    int i, j, n = 3;

    // Upper part of the pattern
    for(i = 1; i <= n; i++) {
        for(j = i; j < n; j++)
            printf(" ");          // print spaces
        for(j = 1; j <= i; j++)
            printf("* ");         // print stars with space
        printf("\n");
    }

    // Lower part of the pattern
    for(i = n - 1; i >= 1; i--) {
        for(j = n; j > i; j--)
            printf(" ");          // print spaces
        for(j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    return 0;
}
