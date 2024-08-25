#include<stdio.h>

int main(){
    int r,c;
    printf("enter row & column: ");
    scanf("%d%d",&r,&c);

    int arrA[r][c],arrB[r][c],sum[r][c];

    printf("enter arrA: ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arrA[i][j]);
        }
    }
    printf("enter arrB: ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arrB[i][j]);
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum[i][j]=arrA[i][j]+arrB[i][j];
        }
    }
    
    printf("arrA+arrB: ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

}