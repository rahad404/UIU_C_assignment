#include<stdio.h>
#include<math.h>

int main ()
{
    int i,x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    
    while (x!=y)
    {
        printf("%d ",x*x);
        (x<y) ? x++ : x--;
    }
    printf("Reached! ");
    
}