#include<stdio.h>

int main(){
    char str[20],rev[20];
    gets(str);

    // count length
    int len=0,temp=0;
    for(int i=0;str[i]!='\0';i++){
            len++;
    }

    // reverse string
    for(int i=0;i<len/2;i++){
        temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
    puts(str);
}
