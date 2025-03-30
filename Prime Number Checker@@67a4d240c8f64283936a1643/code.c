#include <stdio.h>

// Function to check if a number is prime
int is_prime(int a) {
    if (a <= 1) return 0;  // 0 and 1 are not prime
    if (a == 2) return 1;  // 2 is prime

    for (int i = 2; i * i <= a; i++) {  // Check divisibility
        if (a % i == 0)
            return 0;  // Not prime
    }
    return 1;  // Prime
}

int main() {
    int n, num;
    
   
    scanf("%d", &n);
    
    int result = 1;  // Assume no prime numbers found
    
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (is_prime(num)) {
            result = 0;  // If any number is prime, set result to 0
        }
    }
    
    printf("%d\n", result);
    
    return 0;
}
