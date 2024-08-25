#include<stdio.h>
#include<math.h>

int main(){
    int n,x,y;

    scanf("%d",&n);
    x = ceil(log2(n));
    y = floor(log2(n));

    if(n>0){
        if(x==y){
            printf("yes\n");
        }
        else{
            printf("NO\n");
        }
    }
    else if(n==0){
        printf("Zero is not valid input\n");
    }
    else{
        printf("Negative input is not valid\n");
    }
    
}