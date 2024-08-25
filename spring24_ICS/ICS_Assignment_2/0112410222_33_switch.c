#include<stdio.h>

int main(){
    int number;

    printf("Enter number: ");
    scanf("%d",&number);

    switch (number%2==0){
        case 1:
            printf("Even\n");
            break;
        case 0:
            printf("Odd\n");
            break;
    }
    return 0;
}