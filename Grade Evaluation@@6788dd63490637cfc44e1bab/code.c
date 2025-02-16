#include <stdio.h>

int main() {
    char grade;
    
    // Taking input
    
    scanf(" %c", &grade);  // Added space before %c to ignore whitespace

    // Switch case to determine grade description
    switch (grade) {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Good\n");
            break;
        case 'C':
            printf("Average\n");
            break;
        case 'D':
            printf("Below Average\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
        default:
            printf("Invalid Grade\n");
    }

    return 0;
}
