#include <stdio.h>

int main() {
    int a, b, c;

  
    scanf("%d %d %d", &a, &b, &c);

    // Checking the type of triangle
    if (a == b && b == c) {  // All three sides are equal
        printf("Equilateral\n");
    }
    else if (a == b || b == c || c == a) {  // At least two sides are equal
        printf("Isosceles\n");
    }
    else {  // No sides are equal
        printf("Scalene\n");
    }

    return 0;
}
