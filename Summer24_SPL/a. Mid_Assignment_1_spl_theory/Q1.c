#include<stdio.h>

int main(){
    // last 2 digit of id = 22
    // enter n = (22%6)+5 = 9;
    
    int n;
    printf("enter n: ");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        for(int j=0 ; j<n-i-1 ; j++){
            printf(" ");
        }
        
        int count = 1;
        for(int j=0; j<i+1; j++){
            printf("%d",count);
            count+=2;
            if(count>5) count=1;
        }
        printf("\n");
    }   
}