#include <stdio.h>

int main() {
    int a, b;
    char op;

    // Taking input
   
    scanf("%d %d %c", &a, &b, &op);

    // Performing operation based on user input
    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b != 0) // Prevent division by zero
                printf("%d\n", a / b);
            else
                printf("Error");
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
