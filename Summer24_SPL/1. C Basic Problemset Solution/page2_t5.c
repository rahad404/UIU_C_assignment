#include<stdio.h>

int main()
{
    float a=2.3,b=5.8,c=1.1,d=3.5,r;
    r = (a+b-c)*d-a/d;

    printf("(%f+%f-%f)*%f-%f/%f = %f",a,b,c,d,a,d,r);

}