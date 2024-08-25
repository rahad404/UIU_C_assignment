#include<stdio.h>

int main(){
    char str[30];
    gets(str);

    for(int i=0;str[i]!='\0';i++){
        if(str[i]<='z'&&str[i]>='a'){str[i]=str[i]-32;}
        else if(str[i]<='Z'&&str[i]>='A'){str[i]=str[i]+32;}
    }
    puts(str);
}
