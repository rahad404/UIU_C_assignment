#include<stdio.h>

int main(){
    char str[30],c;
    puts("enter string: ");
    gets(str);
    puts("enter character: ");
    scanf("%c",&c);

    // string and character to upper case 
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
    if(c>='a'&&c<='z'){
            c=c-32;
    }
    
    // count 
    int len=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==c){
            len++;
        }
    }
    printf("%c : %d\n",c,len); 
}