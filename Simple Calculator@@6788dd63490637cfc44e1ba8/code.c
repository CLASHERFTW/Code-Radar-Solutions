#include<stdio.h>
int main(){
    int a,b;
    char op;
    if(op=='+')
    {
        printf("%d",a+b);
    }
    else if(op=='/')
    {
        printf("%d",a/b);
    }
   else  if(op=='-')
    {
        printf("%d",a-b);
    }
    else if(op=='*')
    {
        printf("%d",a*b);
    }
    return 0;
}