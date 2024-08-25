#include<stdio.h>
#include<math.h>

int main(){
    float r;
    float pi = 3.1416;

    printf("Enter the radius: ");
    scanf("%f",&r);

    float area = pi*r*r;
    float circumference = 2*pi*r;

    printf("Area: %f\n",area);
    printf("Circumference: %f\n\n",circumference);
}
