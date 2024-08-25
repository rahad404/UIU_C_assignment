#include<stdio.h>

int main ()
{
    int i,n, x,y;
    printf("player1 enter number: ");
    scanf("%d",&x);
    printf("enter tries: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("player2 guess number: ");
        scanf("%d",&y);
        
        x==y ? printf("Right, Player-2 wins!\n")
        :printf("Wrong, %d Choice(s) Left!\n",(n-i));
        
        if(x==y)break;
        if(n-i==0)printf("Player-1 wins!\n");
    }
}