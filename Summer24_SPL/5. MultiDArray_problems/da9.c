#include<stdio.h>

int main(){
    int n;
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
            if(i==0){
                sum += arr[i][j];
            }
            else if(i==j){
                sum += arr[i][j];
            }
            else if((i+j)==(n-1)){
                sum += arr[i][j];
            }
            else if(i==(n-1)){
                sum += arr[i][j];
            }
        }
    }
    printf("sum: %d",sum);

}