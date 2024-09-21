#include<stdio.h>

void mult2(int *arr, int n){
    for(int i=0; i<n; i++){
        arr[i] *= 2;
    }

}

int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter array: ");
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int *ptr = arr;
    
    mult2(arr, n);

    printf("new array: ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    
}