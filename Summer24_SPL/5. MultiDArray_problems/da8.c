#include<stdio.h>

int main(){
    int n,m;
    printf("enter m & n: ");
    scanf("%d%d",&m,&n);

    int arr[m][n];
    printf("enter arr: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int r=0,c=0,max=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(max<arr[i][j]){
                max = arr[i][j];
                r = i;
                c = j;
            }
        }
    }
    printf("Max: %d\n",max);
    printf("Location:[%d][%d]",r,c);
}