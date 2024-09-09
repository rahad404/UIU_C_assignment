#include<stdio.h>

void arr_reverse(int n, int arr[]);

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    arr_reverse(n,arr);

}

void arr_reverse(int n, int arr[]){
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
}
