#include<stdio.h>

int main(){
    int x;
    printf("enter x: ");
    scanf("%d",&x);

    if(x>0){
        if((x & (x-1))==0){
            printf("yes\n");
        }
        else{
            printf("NO\n");
        }
    }
    else if(x==0){
        printf("Zero is not valid input\n");
    }
    else{
        printf("Negative input is not valid\n");
    }
}