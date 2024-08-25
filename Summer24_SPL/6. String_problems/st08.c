#include<stdio.h>

int main(){
    char str[30];
    gets(str);

    int len=0;
    for(int i=0;str[i]!='\0';i++){
        len++;
    }
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(str[i]<str[j]){
                int temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    puts(str);   
}