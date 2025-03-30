int main(){
    
    int i,j,k,a;
    
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=i-1;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
 for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");  // Print leading spaces
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");  // Print stars
        }
        printf("\n");
    }

    return 0;
}