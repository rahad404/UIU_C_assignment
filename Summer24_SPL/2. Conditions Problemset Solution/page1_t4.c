#include<stdio.h>

int main(){
    int a,b,c,x;

    scanf("%d %d %d",&a,&b,&c);

    x = a+b+c;

    if (a<180 && b<180 && c<180 && a>0 && b>0 && c>0){
        switch(x==180){
        case 1:
            printf("Yes\n");
            break;
        case 0:
            printf("No\n");
        }
    }
    else{
        printf("No\n");
    }
}