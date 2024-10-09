#include<stdio.h>

int sumn(int n){
    if(n==0){
        return 0;
    }

    return n+sumn(n-1);
}

int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int sum = sumn(n);
    printf("Sum: %d",sum);
}