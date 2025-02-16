#include <stdio.h>

int main() {
    char grade;
    
    
    scanf(" %c", &grade);  // Added space before %c to ignore whitespace

    // Switch case to determine grade description
    switch (grade) {
        case 'R':
            printf("Stop");
            break;
        case 'G':
            printf("Go");
            break;
        case 'Y':
            printf("Slow Down");
            break;
       
        default:
            printf("Invalid Grade\n");
    }

    return 0;
}
