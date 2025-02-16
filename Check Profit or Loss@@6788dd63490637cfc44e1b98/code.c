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
        printf("no profit no loss");
    }
    return 0;
}