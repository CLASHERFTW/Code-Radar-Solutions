#include <stdio.h>

int main() {
    int i, j, n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(i = n; i >= 1; i--) {  // Start from n and decrease
        for(j = 1; j <= i; j++) {  // Print numbers from 1 to i
            printf("%d ", j);
        }
        printf("\n");  // Move to the next row
    }
    
    return 0;
}
