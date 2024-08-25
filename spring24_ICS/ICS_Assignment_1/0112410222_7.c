#include<stdio.h>

int main(){
    int d;
    float f;
    char c;

    printf("int value: ");
    scanf("%d",&d);

    printf("float value: ");
    scanf("%f",&f);

    getchar();
    printf("char value: ");
    scanf("%c",&c);

    printf("\nThe integer value: %d\n",d);
    printf("The floating point value: %f\n",f);
    printf("The character value: %c\n\n",c);
}
