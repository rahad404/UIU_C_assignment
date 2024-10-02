#include<stdio.h>

void swap(int *a,int *b){
    int *temp;
    temp = a;
    a = b;
    b = temp;
    printf("befor swap: a=%d b=%d\n",*a,*b);

}

int main(){
    int a,b;
    int *ptra=&a, *ptrb=&b;

    printf("enter two number: ");
    scanf("%d%d",ptra,ptrb);

    printf("befor swap: a=%d b=%d\n",*ptra,*ptrb);

    swap(ptra,ptrb);
}