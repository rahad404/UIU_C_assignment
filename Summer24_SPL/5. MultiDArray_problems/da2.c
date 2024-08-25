#include<stdio.h>
// #include<math.h>

int main(){
    int r,c;
    printf("enter row: ");
    scanf("%d",&r);
    printf("enter column: ");
    scanf("%d",&c);
    

    int arr[r][c];
    printf("enter arr: ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Row-wise: ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",arr[i][j]);
        }
    }
    printf("\nColumn-wise: ");
    for(int j=0;j<c;j++){
        for(int i=0;i<r;i++){
            printf("%d",arr[i][j]);
        }
    }
}