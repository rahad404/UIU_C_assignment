#include<stdio.h>

int GCD(int a, int b){
    while(b!=0){
        int rem = a%b;
        a = b;
        b = rem;
    }
    return a;
}

int LCM(int a, int b){
    return (a*b)/GCD(a,b);
}

int main(){
    int a,b;

    printf("enter 2 numbers: ");
    scanf("%d%d",&a,&b);

    int gcd = GCD(a,b);
    int lcm = LCM(a,b);

    printf("GCD: %d\nLCM: %d\n",gcd,lcm);
}