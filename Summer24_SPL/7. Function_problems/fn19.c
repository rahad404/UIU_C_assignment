#include<stdio.h>

int isPrime(int n){
    if(n==1)return 0;
    if(n==2)return 1;

    for(int i=2; i<n; i++){
        if(n%i==0)return 0;
    }
    return 1;
}

void GeneratePrime(int x){
    
    for(int i=1; i<x; i++){
        int p = isPrime(i);
        if (p==1){
            printf("%d, ",i);
        }
    }
    printf("\n");
}

int main(){
    int num;
    scanf("%d",&num);

    printf("Prime less than %d: ",num);
    GeneratePrime(num);
}