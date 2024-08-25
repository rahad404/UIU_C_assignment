#include<stdio.h>

int main()
{
    int x,i;
    scanf("%d",&x);

    for(i=1;i<=x;i++){
        i%2!=0 ? printf("1 ") : printf("0 ");
    }
    printf("\n");
    
    return 0;
}