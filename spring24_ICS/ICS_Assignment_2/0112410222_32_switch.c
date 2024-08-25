#include<stdio.h>

int main(){
    float number;

    printf("Enter the number: ");
    scanf("%f",&number);

    switch (number>=0)
    {
        case 1:
            printf("Positive\n");
            break;
        case 0:
            printf("Negative\n");
            break;
    }
}