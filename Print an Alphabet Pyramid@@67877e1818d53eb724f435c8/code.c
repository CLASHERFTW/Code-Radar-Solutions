#include <stdio.h>

int main() {
    int i, j, n, space;
    
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {  
        // Print spaces for alignment
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        
        // Print increasing alphabets
        for (j = 1; j < i; j++) {
            printf("%c ", 'A' + j - 1);
        }
        printf("%c ", 'A' + i - 1); // Print the last letter without space
        
        printf("\n");  // Move to next row
    }

    return 0;
}
