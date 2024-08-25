#include<stdio.h>

int main()
{
    int x,i,n=1;
    scanf("%d",&x);

    for(i=1;i<=x;i++){
        printf("%d ",n);
        n+=2;
    }
    printf("\n");
    
    return 0;
}