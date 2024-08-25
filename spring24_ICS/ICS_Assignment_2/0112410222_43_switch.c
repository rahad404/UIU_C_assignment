#include<stdio.h>

int main(){
    float a,b;
    int choice;

    printf("Enter 1st number: ");
    scanf("%f",&a);
    printf("Enter 2nd number: ");
    scanf("%f",&b);

    printf("\ntype '1' for addition\n");
    printf("type '2' for subtraction\n");
    printf("type '3' for multiplication\n");
    printf("type '4' for division\n\n");

    printf("Enter your choice(1,2,3,4): ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            printf("\nAddition: %.f\n",(a+b));
            break;
        case 2:
            printf("\nSubtraction: %.f\n",(a-b));
            break;
        case 3:
            printf("\nMultiplication: %.f\n",(a*b));
            break;
        case 4:
            printf("\nQuotient: %.f\n",(a/b));
            break;
        default:
            printf("\nInvalid Choice\n");
            break;
    }
}