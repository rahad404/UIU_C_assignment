#include <stdio.h>
#include <math.h>

int main(){
    float x,y;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    printf("Enter the value of y: ");
    scanf("%f",&y);

    printf("Addition: %f\n",x+y);
    printf("Subtraction: %f\n",x-y);
    printf("Multiplication: %f\n",x*y);
    printf("quotient: %f\n",x/y);
    // printf("Remainder: %f\n",x%y);
    printf("Remainder: %f\n",remainder(x,y));
    printf("Remainder: %f\n",fmod(x,y));
}
