#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,x1,x2;
    scanf("%f%f%f",&a,&b,&c);
    
    x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
    x2 = (-b-sqrt(b*b-4*a*c))/(2*a);

    printf("x1 = %.2f\nx2 = %.2f\n",x1,x2);
}