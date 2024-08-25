#include<stdio.h>
#include<math.h>

int main()
{
    float u,a,s,v;
    scanf("%f%f%f",&u,&a,&s);
    v = sqrt(u*u+2*a*s);
    printf("v = %.2f\n",v);
}