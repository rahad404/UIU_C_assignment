#include<stdio.h>
/*
void swap(int *a,int *b){
    int *temp;
    temp = a;
    a = b;
    b = temp;
    printf("befor swap(function): a=%d b=%d\n",*a,*b);
}
*/

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("befor swap(function): a=%d b=%d\n",*a,*b);

}

int main(){
    int a,b;
    int *ptra=&a, *ptrb=&b;

    printf("enter two number: ");
    scanf("%d%d",ptra,ptrb);

    printf("befor swap(main): a=%d b=%d\n",*ptra,*ptrb);

    swap(ptra,ptrb);

    printf("after swap(main): a=%d b=%d\n",*ptra,*ptrb);
}