#include<stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;

    printf("Value in func: %d %d\n",*x,*y);
}

int main(){
    int a,b;

    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);

    int *ptra,*ptrb;
    ptra = &a;
    ptrb = &b;

    swap(ptra, ptrb);
    printf("Value in main: %d %d\n",a,b);
    
}