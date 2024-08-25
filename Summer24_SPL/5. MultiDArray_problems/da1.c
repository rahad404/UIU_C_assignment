#include<stdio.h>
#include<math.h>

int main(){
    int n,sq;
    printf("enter n: ");
    scanf("%d",&n);
    sq = sqrt(n);

    int arr[sq][sq];
    printf("enter arr: ");
    for(int i=0;i<sq;i++){
        for(int j=0;j<sq;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("output: \n");
    for(int i=0;i<sq;i++){
        for(int j=0;j<sq;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}