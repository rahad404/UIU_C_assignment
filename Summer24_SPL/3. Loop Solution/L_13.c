#include<stdio.h>

int main()
{
    int n,product=1;
    scanf("%d",&n);
    printf("%d!= ",n);

    for(int i=1;i<=n;i++){
        
        printf("%d",(n-(i-1)));
        product *= i;
        
        if(i!=n)printf("X");
    }
    printf("= %d\n",product);
}