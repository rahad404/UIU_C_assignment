#include<stdio.h>

int main(){
    int x,y;
    printf("enter x: ");
    scanf("%d",&x);
    printf("enter y: ");
    scanf("%d",&y);

    int mult = (x*=y);
    printf("multiplication: %d\n",mult);
    
    x/=y;
    int div = (x/=y);
    printf("division: %d\n",div);

}
