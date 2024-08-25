#include<stdio.h>

int main(){
    float number1;
    char ch;
    float number2;

    printf("number1: ");
    scanf("%f",&number1);
    getchar();
    printf("operator(+,-,*,/): ");
    scanf("%c",&ch);
    printf("number2: ");
    scanf("%f",&number2);

    switch(ch){
        case '+':
            printf("Additon: %f\n",(number1+number2));
            break;
        case '-':
            printf("Subtraction: %f\n",(number1-number2));
            break;
        case '*':
            printf("Multiplication: %f\n",(number1*number2));
            break;
        case '/':
            if(number2==0){
                printf("Division: Zero as divisor is not valid\n");
            }
            else{
                printf("Division: %f\n",(number1/number2));
            }
            break;

    }
}