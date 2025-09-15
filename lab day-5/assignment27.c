//08/09/2025
//write a c-program using switch case to check whether a given alphabet is a vowel or consonent
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a charcter: ");
    scanf("%c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("'%c' is a vowel.\n", ch);
                break;
            default:
                printf("'%c' is a consonant.\n", ch);
        }
    } else {
        printf("Invalid input! Please enter an alphabet.\n");
    }

    return 0;
}

