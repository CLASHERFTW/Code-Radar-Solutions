#include <stdio.h>

int main() {
    int i, j, n, space;
    
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {  
        // Print spaces for alignment
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        
        // Print increasing numbers (without extra space)
        for (j = 1; j < i; j++) {
            printf("%d ", j);
        }
        printf("%d", i); // Print the last number without trailing space
        
        printf("\n");  // Move to next row
    }

    return 0;
}
