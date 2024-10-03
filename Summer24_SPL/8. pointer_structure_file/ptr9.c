#include<stdio.h>

void number(int num){
    if(num>10){
        return;
    }
    printf("%d ",num);
    number(num+1);
}

int main(){
    printf("Display 1-10(recursion): ");
    number(1);
}