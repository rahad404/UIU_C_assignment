#include<stdio.h>

int main(){
    char str1[30],str2[30],str3[60];
    
    // input 2 string
    puts("string1: "); gets(str1);
    puts("string2: "); gets(str2);
    
    // count length
    int len=0;
    for(int i=0;str1[i]!='\0';i++){
        len++;
    }

    // concat 2 string 
    for(int i=0;str1[i]!='\0';i++){
        str3[i]=str1[i];
    }
    for(int i=0;str2[i]!='\0';i++){
        str3[len+i]=str2[i];
    }

    puts(str3);

    // int len1=0;
    // for(int i=0;str3[i]!='\0';i++){
    //     len1++;
    // }
    // printf("%d",len1);
}