#include<stdio.h>
 
int isPrime(int n){
    if(n==1)return 0;
    if(n==2)return 1;

    for(int i=2; i<n; i++){
        if(n%i==0)return 0;
    }
    return 1;
}

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    
    int p = isPrime(n);
    
    (p==0)?puts("Not Prime"):puts("Prime");
}
