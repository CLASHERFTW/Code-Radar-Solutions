#include <stdio.h>

int main() {
    int n, i, j;

    // Taking user input
    
    scanf("%d", &n);

    // Outer loop for rows
    for (i = 1; i <= n; i++) {
        // Inner loop for spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Inner loop for stars
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
