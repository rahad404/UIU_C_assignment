#include<stdio.h>

int main(){
    int x;
    printf("enter x: ");
    scanf("%d",&x);

    printf("x++ : %d\n",x++);
    x--;
    printf("++x : %d\n",++x);
    printf("x-- : %d\n",x--);
    x++;
    printf("--x : %d\n",--x);
}
