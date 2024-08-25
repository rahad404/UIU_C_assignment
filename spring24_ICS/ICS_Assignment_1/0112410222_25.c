#include<stdio.h>
#include<stdbool.h>

int main(){
    int a,b,c;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    printf("enter c: ");
    scanf("%d",&c);

    int x,y,z;
    x= (a+b)<=80;
    y= !(a+c);
    z= a!=0;

    printf("\nx = %d\n",x);
    printf("y = %d\n",y);
    printf("z = %d\n",z);

}
