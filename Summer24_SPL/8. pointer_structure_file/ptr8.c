#include<stdio.h>

void arrReverse(int n, int *array){
    for(int i=0; i<n; i++){
        printf("%d ",*(array+(n-i-1)));
    }
    printf("\n");
}

int main(){
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);

    int arr[n];
    int *ptra = arr;

    printf("enter array: ");
    for(int i=0; i<n; i++){
        scanf("%d",ptra+i);
    }

    printf("reverse array: ");
    arrReverse(n,ptra);
}