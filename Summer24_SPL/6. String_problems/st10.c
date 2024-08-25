#include<stdio.h>

int main(){
    char str[30];
    gets(str);

    // get the length
    int len=0;
    for(int i=0;str[i]!='\0';i++){
        len++;
    }
    
    // check palindrome
    int count=0;
    for(int i=0;i<len;i++){
        if(str[i]!=str[len-1-i]){
            count++;
        }
    }
    (count==0)?puts("Yes"):puts("No");
}