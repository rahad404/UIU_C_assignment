#include<stdio.h>

char input_value(char c); // function prototype

// main function
int main(){
    char x;
    scanf("%c",&x);

    printf("\nValue received from main: %c\n",input_value(x));
}

// return input character value function 
char input_value(char c){
    return c;
}