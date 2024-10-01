#include<stdio.h>

int main(){
    int a,b;
    int *ptra = &a, *ptrb = &b;

    scanf("%d%d",ptra,ptrb);

    int sum = *ptra + *ptrb;

    printf("%d\n",sum);
}