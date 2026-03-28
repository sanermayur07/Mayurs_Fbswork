//Write a program to accept string from user and replace one character
//from special symbol

#include <stdio.h>

void main() {
    char str[50];
    char ch; 
	char replace;

    // Input string
    printf("Enter a string= ");
    scanf("%s", str);

    // Input character to replace
    printf("Enter character= ");
    scanf(" %c", &ch);

    // Input special symbol
    printf("Enter special symbol to replace Character= ");
    scanf(" %c", &replace);

    // Replace logic
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            str[i] = replace;
        }
    }

    // Output
    printf("Updated string is = %s", str);
}