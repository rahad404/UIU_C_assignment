#include<stdio.h>

int main(){
    char str[20];
    gets(str);
    
    // count length
    int len=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
           str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            len++;
        }
        
    }
    printf("%d\n",len);
}