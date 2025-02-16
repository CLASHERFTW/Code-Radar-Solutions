#include<stdio.h>
int mian(){
    int n,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }if (count==2){
        prinf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}