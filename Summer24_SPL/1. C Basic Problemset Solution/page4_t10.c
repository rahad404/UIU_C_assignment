#include<stdio.h>

int main()
{
    int f,i;
    scanf("%d",&i);
    f = i/12;
    i = i%12;
    printf("%d feet %d inch",f,i);
}