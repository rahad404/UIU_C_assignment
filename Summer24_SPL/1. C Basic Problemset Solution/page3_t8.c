#include<stdio.h>

int main()
{
    int s,u,a,t;
    scanf("%d%d%d",&u,&a,&t);
    s = (u*t)+(0.5*a*t*t);
    printf("s = %d",s);
}