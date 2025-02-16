#include <stdio.h>

int main() {
    int n, i, sum = 0; // Initialize sum to 0

    // Taking input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop to calculate sum
    for (i = 1; i <= n; i++) { // Start from 1 instead of 0
        sum += i;
    }

    // Display result
  

    return 0;
}
