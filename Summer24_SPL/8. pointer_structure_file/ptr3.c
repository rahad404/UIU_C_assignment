#include<stdio.h>

int main(){
    int a[5];
    int *ptra = a;

    printf("enter array(size=5): ");
    for(int i=0;i<5;i++){
        scanf("%d",ptra+i);
    }

    printf("output using pointer: ");
    for(int i=0;i<5;i++){
        printf("%d ",*(ptra+i));
    }

}