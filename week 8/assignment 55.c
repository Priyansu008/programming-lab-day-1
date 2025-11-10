/* write a c program to do-1.length of a string .
                           2.copy one string to another.
                          3.append one string to another .
						  4.compare two strings.
						  without using library function.
						 */ 
						 #include <stdio.h>

int main() {
    char str1[100], str2[100], str3[200];
    int i, j;

    // Input strings
    printf("Enter first string: ");
    gets(str1);  
    printf("Enter second string: ");
    gets(str2);

    // 1. Find length of first string
    int length = 0;
    while (str1[length] != '\0') {
        length++;
    }
    printf("\nLength of first string: %d\n", length);

    // 2. Copy first string to another
    for (i = 0; str1[i] != '\0'; i++) {
        str3[i] = str1[i];
    }
    str3[i] = '\0';  
    printf("Copied string: %s\n", str3);

    // 3. Append second string to first string
    i = 0;
    while (str1[i] != '\0') {
        str3[i] = str1[i]; 
        i++;
    }
    j = 0;
    while (str2[j] != '\0') {
        str3[i] = str2[j]; 
        i++;
        j++;
    }
    str3[i] = '\0';
    printf("After appending second string: %s\n", str3);

    // 4. Compare two strings
    i = 0;
    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]) {
        i++;
    }
    if (str1[i] == str2[i]) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}
