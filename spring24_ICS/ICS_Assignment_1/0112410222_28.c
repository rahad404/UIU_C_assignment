#include <stdio.h>
#include <math.h>

int main(){
    float x,p1,p2,p3,equ;

    printf("enter x: ");
    scanf("%f",&x);

    p1 = 2*pow(cos(x),2);
    p2 = sqrt(3)*sin(x);
    p3 = sin(x/2);

    equ = p1-p2+p3;

    printf("%f\n",equ);
}
