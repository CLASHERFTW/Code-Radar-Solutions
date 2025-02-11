#include <stdio.h>

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%99s", str1);
    
    printf("Enter second string: ");
    scanf("%99s", str2);
    
    printf("You entered:\nFirst string: %s\nSecond string: %s\n", str1, str2);
    
    return 0;
}
