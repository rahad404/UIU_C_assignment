#include<stdio.h>

int main(){
    int var1,var2;

    printf("enter x: ");
    scanf("%d",&var1);
    printf("enter y: ");
    scanf("%d",&var2);

    if (var1>var2) {
        printf("max: %d",var1);
    }
    else {
        printf("max: %d",var2);
    }
}
