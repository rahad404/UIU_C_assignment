#include<stdio.h>

int main(){
    char c;

    printf("Enter character: ");
    scanf("%c",&c);
    
    int i=(int)c;
    if ((i>=65 && i<=90)||(i>=97 && i<=122)){
        printf("Alphabet");
    }
    else if(i>=48 && i<=57){
        printf("Digit");
    }
    else{
        printf("Special");
    }
}