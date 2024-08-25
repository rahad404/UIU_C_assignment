#include<stdio.h>

int main(){
    int n;
    printf("enter n: ");
    scanf("%d",&n);

    int arr[n][n];
    
    printf("enter arr: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 && j<=n/2){
                sum += arr[i][j];
            }
            else if(j==n-1 && i<=n/2){
                sum += arr[i][j];
            }
            else if(j==n/2){
                sum += arr[i][j];
            }
            else if(i==n/2){
                sum += arr[i][j];
            }
            else if(j==0 && i>=n/2){
                sum += arr[i][j];
            }
            else if(i==n-1 && j>n/2){
                sum += arr[i][j];
            }
        }
    }
    printf("sum: %d ",sum);

}