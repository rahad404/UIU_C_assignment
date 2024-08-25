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

    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            if(arr[i][j]!=arr[j][i]){
                count++;
            }
        }
    }

    (count!=0)?printf("No"):printf("Yes");
}