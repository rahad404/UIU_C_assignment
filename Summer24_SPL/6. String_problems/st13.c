#include<stdio.h>

int main(){
    char str[30];
    gets(str);

    // get the length of the string 
    int len=0;
    for(int i=0;str[i]!=0;i++){
        len++;
    }

    // remove repeated character
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(str[i]==str[j]){
                for(int k=j;k<len;k++){
                    str[k]=str[k+1];
                }
                len--;
                j--;
            }
        }
    }
    puts(str);
}