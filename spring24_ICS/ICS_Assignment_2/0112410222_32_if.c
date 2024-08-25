#include<stdio.h>

int main(){
    float number;

    printf("Enter the number: ");
    scanf("%f",&number);

    if(number>=0){
        printf("Positive\n");
    }
    else{
        printf("Negative\n");
    }
}