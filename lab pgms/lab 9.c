#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void strcomp(char str1[30], char str2[30]);
void strcon(char str1[30], char str2[30]);
void strlength(char str1[30], char str2[30]);

void main() {
    int ch;
    char str1[30], str2[30];

    printf("Enter String 1: ");
    scanf("%s", str1);
    printf("Enter String 2: ");
    scanf("%s", str2);

    printf("Enter your choice:\n");
    printf("1: For string compare\n");
    printf("2: For string concatenation\n");
    printf("3: For string length:\n");
    scanf("%d", &ch);

    switch(ch) {
        case 1:
            strcomp(str1, str2);
            break;
        case 2:
            strcon(str1, str2);  // Fixed: was str1, str1 earlier
            break;
        case 3:
            strlength(str1, str2);
            break;
        default:
            printf("Invalid choice, try with valid input\n");
            exit(0);
    }
}

void strcomp(char str1[], char str2[]) {
    int i;
    for(i = 0; str1[i] != '\0'; i++) {
        if(str1[i] != str2[i]) {
            printf("Strings are not equal\n");
            return;
        }
    }
    if(str2[i] != '\0') {
        printf("Strings are not equal\n");
        return;
    }
    printf("Strings are equal\n");
}

void strcon(char str1[], char str2[]) {
    int i, len;
    len = strlen(str1);
    for(i = 0; str2[i] != '\0'; i++) {
        str1[len + i] = str2[i];
    }
    str1[len + i] = '\0';
    printf("After concatenation, String 2 to String 1 is: %s\n", str1);
}

void strlength(char str1[], char str2[]) {
    int i, len1 = 0, len2 = 0;
    for(i = 0; str1[i] != '\0'; i++) {
        len1++;
    }
    for(i = 0; str2[i] != '\0'; i++) {
        len2++;
    }
    printf("The length of String 1: %d\nThe length of String 2: %d\n", len1, len2);
}
