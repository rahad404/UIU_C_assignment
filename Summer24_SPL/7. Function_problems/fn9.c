#include<stdio.h>

int factorial(int n);

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    int f = factorial(n);

    printf("Factorial: %d\n",f);

}

int factorial(int n){
    int x=1;
    for(int i=1; i<=n; i++){
        x *= i;     
    }
    return x;
}