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
    // make it upper case
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-32;
        }
    }

    for(int i=0;i<len;i++){
        mc[str[i]]++;
    }

    for(int i=0;i<len;i++){
        if(max<=mc[str[i]]){
            max = mc[str[i]];
            res = str[i];
        }
    }
    printf("%c (or %c)\n",res,res+32);
}