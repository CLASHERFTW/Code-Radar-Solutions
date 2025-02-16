#include<stdio.h>
int main(){
    int n,i,prd;
    scanf("%d",&n);
for(i=1;i<=10;i++){
prd=n*i;
printf("%d*%d=%d\n",n,i,prd);
}

    return 0;
}