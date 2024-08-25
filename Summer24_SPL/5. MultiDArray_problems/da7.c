#include<stdio.h>

int main(){
    int arrA[3][3],arrB[3][3],arrC[3][3]={0};

    printf("enter arrA: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arrA[i][j]);
        }
    }
    printf("enter arrB: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arrB[i][j]);
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                arrC[i][j] += arrA[i][k]*arrB[k][j];
            }
        }
    }

    printf("Result: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arrC[i][j]);
        }
        printf("\n");
    }
}