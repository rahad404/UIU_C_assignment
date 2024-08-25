#include<stdio.h>

int main(){
    int x,y,pow=1;

    scanf("%d%d",&x,&y);

    for(int i=1;i<=y;i++){
        pow *= x;
    }
    printf("%d",pow);
}