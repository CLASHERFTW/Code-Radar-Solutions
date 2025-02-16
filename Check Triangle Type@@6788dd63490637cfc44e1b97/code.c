#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b&&b==c&&c==a)
    {
        printf("equilateral");
    }
    else if(a==b && b==c||c==a && c==b ||){
        printf("Isoceles");
    }
    else{
        printf("scalene");
    }
    return 0;
}