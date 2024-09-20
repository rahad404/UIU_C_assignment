#include<stdio.h>

int power(int x,int y){
    int p=1;
    for(int i=1; i<=y; i++){
        p *= x;
    }
    return p;
}

int main(){
    int x,y;
    printf("enter number: ");
    scanf("%d",&x);
    printf("Enter power: ");
    scanf("%d",&y);

    int p = power(x,y);

    printf("%d to the power %d is %d\n",x,y,p);

}