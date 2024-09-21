#include<stdio.h>

void det_even(int arr[], int n){
    printf("even value: ");
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            printf("%d ",arr[i]);
        }
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

    det_even(arr, n);
}