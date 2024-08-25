#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arrA[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arrA[i]);
    }
    int arrB[n];
    for(int i=0;i<n;i++){
        arrB[i]=arrA[n-1-i];
    }
    printf("ArrayA: ");
    for(int i=0;i<n;i++){
        printf("%d ",arrA[i]);
    }
    printf("\nArrayB: ");
    for(int i=0;i<n;i++){
        printf("%d ",arrB[i]);
    }
}