#include <stdio.h>

int main() {
    int n, i, j;

    
    printf("");
    scanf("%d", &n);

    
    for (i = n; i >= 1; i--) {
        for (j = i; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
