#include<stdio.h>

int main()
{
    int c,i;
    float x,sum;

    scanf("%d",&c);

    for(i=1;i<=c;i++){
        scanf("%f",&x);
        sum += x;
    }
    printf("AVG of %d inputs: %.2f",c,sum/c);    
    printf("\n");
    
    return 0;
}