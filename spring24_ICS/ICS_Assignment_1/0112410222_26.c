#include<stdio.h>
#include<stdbool.h>

int main(){
    int a,b,c;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    printf("enter c: ");
    scanf("%d",&c);

    if ((a+b) <= 80 && b >= 0){
        printf("\n1\n");
    }
    else {
        printf("\n0\n");
    }

    if ((a - b) == 0 || c != 0){
        printf("1\n");
    }
    else {
        printf("0\n");
    }

    if (a != b ||(b < a)&&c > 0){
        printf("1\n");
    }
    else {
        printf("0\n");
    }

}

