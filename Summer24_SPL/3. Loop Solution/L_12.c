#include<stdio.h>

int main()
{
    int n,f1=1,f2=1,nt;
    scanf("%d",&n);

    printf("%d %d ",f1,f2);

    for(int i=3;i<=n;i++){
        nt=f1+f2;
        printf("%d ",nt);
        f1=f2;
        f2=nt;  
    }
    printf("\n");
}