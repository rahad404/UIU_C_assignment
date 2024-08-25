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
            int current=arr[i][j];
            if(current==-1){continue;}
            for(int k=0;k<m;k++){
                for(int l=0;l<n;l++){
                    if(arr[i][j]==arr[k][l] && (k!=i && l!=j)){
                        arr[k][l] = -1;
                    }
                }
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}