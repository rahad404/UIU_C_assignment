#include<stdio.h>

int main()
{
    int h,m,s;
    scanf("%d",&s);
    h = s/3600;
    s = s%3600;
    m = s/60;
    s = s%60;
    
    printf("%d hour %d minute %d second",h,m,s);
}