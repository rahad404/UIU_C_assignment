#include<stdio.h>

int isPrime(int n){
    if(n==1)return 0;
    if(n==2)return 1;

    for(int i=2; i<n; i++){
        if(n%i==0)return 0;
    }
    return 1;
}

int GenerateNthPrime(int x){
    int count=0,i=1,pn;
    while(count!=x){
        int p = isPrime(i);
        if(p==1){
            pn=i;
            count++;
        }
        i++;
    }
    return pn;
}

int main(){
    int num;
    scanf("%d",&num);
    int p = GenerateNthPrime(num);

    printf("%dth Prime: %d\n",num,p);
    
}