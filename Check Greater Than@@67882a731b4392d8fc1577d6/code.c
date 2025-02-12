#include <stdio.h>

void compareNumbers(int a, int b) {
    if (a > b) {
        printf("True");
    } else if (a <= b) {
        printf("False");
    } 
    
}

int main() {
    int num1, num2;
    
    
    scanf("%d", &num1);
    
   
    scanf("%d", &num2);
    
    compareNumbers(num1, num2);

    return 0;
}
