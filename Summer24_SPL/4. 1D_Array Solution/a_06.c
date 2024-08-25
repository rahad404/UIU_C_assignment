#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int mx = arr[0];
    int mxi = 0;
    int mn = arr[0];
    int mni = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>mx){
            mx = arr[i];
            mxi = i;
        }
        if(arr[i]<mn){
            mn = arr[i];
            mni = i;
        }
    }
    printf("MAX: %d, Index: %d \n",mx,mxi);
    printf("MIN: %d, Index: %d \n",mn,mni);
}