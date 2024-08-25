#include<stdio.h>

int main()
{
    int cm,m;
    scanf("%d",&cm);
    m = cm/100;
    cm = cm%100;
    printf("%d meter %d centimeter",m,cm);
}