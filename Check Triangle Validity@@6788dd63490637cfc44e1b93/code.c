#include<stdio.h>
int main(){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if(a+b>c && c+b>a && a+c>b){
        printf("Valid");

    }
    else{
        printf("Invalid");
    }
    return 0;

}