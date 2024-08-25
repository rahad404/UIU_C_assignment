#include<stdio.h>

int main(){
    double a;
    double b;

    printf("enter a: ");
    scanf("%lf",&a);
    printf("enter b: ");
    scanf("%lf",&b);

    double x=((3.31*(a*a))+(2.01*(b*b*b)))/((7.16*(b*b))+(2.01*(a*a*a)));

    printf("x: %lf",x);
}
