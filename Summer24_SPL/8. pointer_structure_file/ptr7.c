#include<stdio.h>

int arrSum(int n, int *num){
    int sum=0;
    for(int i=0; i<n; i++){
        sum += *(num+i);
    }
    return sum;
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

    int sum = arrSum(n,ptra);
    printf("sum of the array element: %d\n",sum);
}