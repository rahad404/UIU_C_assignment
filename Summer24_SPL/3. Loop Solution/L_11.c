#include<stdio.h>

int main()
{
    int c,sum=0;
    scanf("%d",&c);

    for(int i=1;i<=c;i++){
        int x = (i*i)*(i+1) ;
        sum += x;
    }
    printf("Result: %d\n",sum);
}