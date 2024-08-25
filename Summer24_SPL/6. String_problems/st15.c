#include<stdio.h>

int main(){
    char str[30],res=0;
    int max=0;
    int mc[400]={0};
    gets(str);

    // get the length of the string 
    int len=0;
    for(int i=0;str[i]!=0;i++){
        len++;
    }
    
    int end = len-1;
    for(int i=end;i>=0;i--){
        if(str[i]==' ' || i==0){
            for(int j=i;j<=end;j++){
                printf("%c",str[j]);
            }
            end=i-1;
            printf(" ");
        }
    }
    printf("\n");
    

}