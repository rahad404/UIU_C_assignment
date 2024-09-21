#include<stdio.h>

int min_value(int arr[], int n){
    int min=arr[1];
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
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

    int min = min_value(arr, n);
    printf("Minimum Value: %d \n",min);
}