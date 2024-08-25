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

    for(int i=0;i<m;i++){
        for(int j=0;j<n/2;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[i][n-j-1];
            arr[i][n-j-1] = temp;
        }
    }

    printf("result arr: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}