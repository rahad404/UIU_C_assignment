#include<stdio.h>

int length(char string[]){
    int i=0,count=0;
    while (string[i]!='\0')
    {
        count++;
        i++;
    }

    if(string[count-1]=='\n') count-- ;
 
    return count;
    
}

int main(){
    char c[100];
    printf("Enter string: ");
    fgets(c, sizeof(c), stdin);
    
    int l = length(c); 
    printf("String length: %d\n",l);
}