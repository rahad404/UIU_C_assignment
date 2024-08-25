#include<stdio.h>

int main(){
    int x,y;

    printf("enter x: ");
    scanf("%d",&x);
    printf("enter y: ");
    scanf("%d",&y);

    int inc=(x += y);
    printf("Incrimented value: %d\n",inc);
    
    x-=y;
    int dec=(x -= y);
    printf("Decremented value: %d\n",dec);
}
