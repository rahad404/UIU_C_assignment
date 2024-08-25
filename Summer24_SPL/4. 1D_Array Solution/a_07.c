#include<stdio.h>

int main(){
    int n,count;
    scanf("%d",&n);
    char arr[n];
    for(int i=0;i<n;i++){
        scanf("%c",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U'||
            arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'){
            count++;
        }
    }

    printf("Count: %d \n",count);
}