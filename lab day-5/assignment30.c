//08/09/2025
//write a c-program using switch-case to display the grade of a student based on their marks
#include <stdio.h>
int main() {
    int marks;
    printf("Enter student marks (0 - 100): ");
    scanf("%d", &marks);
        if (marks < 0 || marks > 100) {
        printf("Invalid marks! Please enter a value between 0 and 100.\n");
        return 1;
    }
    switch (marks / 10) {
        case 10: 
        case 9:
            if (marks >= 95)
                printf("Grade: A+\n");
            else
                printf("Grade: A\n");
            break;
        case 8:
            printf("Grade: B\n");
            break;
        case 7:
            printf("Grade: C\n");
            break;
        default:
            printf("Grade: F\n");
    }

    return 0;
}

