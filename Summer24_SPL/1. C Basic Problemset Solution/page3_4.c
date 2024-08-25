#include<stdio.h>

int main()
{
    int a,b,c,d,r;
    scanf("%d%d%d%d",&a,&b,&c,&d);

    r = a*b+(a-c)/d+b;

    printf("%d*%d+(%d-%d)/%d+%d = %d",a,b,a,c,d,b,r);

}