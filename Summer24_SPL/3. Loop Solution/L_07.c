#include<stdio.h>

int main()
{
    char ch;

    for(int i=1;;i++){
        scanf(" %c", &ch);
        if(ch=='A')break;
        
        printf("Input %d: %c\n",i,ch);
    }
}