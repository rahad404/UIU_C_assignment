#include<stdio.h>

int sum_n(int n)
{
    int sum = 0,x;
    for( int i=1; i<=n; i++){
        scanf("%d",&x);
        sum += x;
    }
    printf("sum in function: %d\n",sum);

    return sum;
}

int main()
{
    int n;
    scanf("%d",&n);

    int x = sum_n(n);

    printf("sum in main: %d\n",x);
}