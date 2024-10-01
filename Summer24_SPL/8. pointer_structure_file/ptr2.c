#include<stdio.h>

int main(){
    int a,b;
    int *ptra = &a, *ptrb = &b;

    scanf("%d%d",ptra,ptrb);

    if(*ptra>*ptrb){
        printf("max: %d\n",*ptra);
    }
    else{
        printf("max: %d\n",*ptrb);
    }

}