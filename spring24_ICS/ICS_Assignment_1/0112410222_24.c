#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    printf("enter c: ");
    scanf("%d",&c);

    int x,y,z;
    x= a-b/3+c*2-1;
    y= a-(b/(3+c)*2)-1;
    z= a-((b/3)+c*2)-1;

    printf("\nx = %d\n",x);
    printf("y = %d\n",y);
    printf("z = %d\n",z);
}
