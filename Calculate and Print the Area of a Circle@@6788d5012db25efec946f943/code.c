#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, area;

    // Taking input from user
    scanf("%f", &radius);

    // Calculating area
    area = PI * radius * radius;

    // Displaying the result
    printf(" Area: %.2f\n", area);

    return 0;
}
