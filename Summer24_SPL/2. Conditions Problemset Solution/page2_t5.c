#include<stdio.h>
#include<math.h>

int main(){
    int n,x,y;

    scanf("%d",&n);
    x = ceil(log2(n));
    y = floor(log2(n));

    if (x==y){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
}