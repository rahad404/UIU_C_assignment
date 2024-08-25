#include <stdio.h>
#include <math.h>

int main(){
    float x;
    printf("enter x: ");
    scanf("%f",&x);

    printf("A = %.f\n",ceil(x));
    printf("B = %.f\n",floor(x));
    printf("A = %.2f\n",fabs(x));
}

