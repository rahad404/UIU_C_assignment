#include<stdio.h>

int main(){
    int n,m;
    printf("enter m & n: ");
    scanf("%d%d",&m,&n);

    int arr[m][n];
    
    printf("enter arr: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum += arr[i][j];
        }
    }
    printf("%d",sum);

}