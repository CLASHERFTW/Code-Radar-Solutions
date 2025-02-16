#include <stdio.h>

int main() {
    char ch;
    
    
    scanf("%c", &ch);

    // Checking if the character is a vowel (uppercase or lowercase)
    if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ||
        (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
        printf("Vowel");
    }
    // Checking if the character is a consonant (A-Z or a-z)
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("Consonant");
    }
    // Checking if the character is a digit (0-9)
    else if (ch >= '0' && ch <= '9') {
        printf("Digit");
    }
    // If it's none of the above, it must be a special character
    else {
        printf("Special Character");
    }

    return 0;
}
