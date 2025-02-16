#include<stdio.h>
int main(){
    int sp ,cp;
    scanf("%d %d ",&cp,&sp);
    if(sp>cp)
    {
        printf("Profit");
    }
    else if(cp>sp)
    {
        printf("Loss");
    }
    else if (cp==sp)
    {
        printf("No Profit No Loss");
    }
    return 0;
}