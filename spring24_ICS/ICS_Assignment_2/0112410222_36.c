#include<stdio.h>

int main(){
    int n;
    printf("Enter a positive nonzero number: ");
    scanf("%d",&n);

    if ((n&(n-1))==0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}