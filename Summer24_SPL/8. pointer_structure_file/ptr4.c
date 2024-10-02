#include<stdio.h>

int str_len(char *str){
    int len = 0;
    while(*str != '\0'){
        len++;
        str++;
    }
    if(*str == '\0')len--;
    return len;
}

int main(){
    char a[100];
    char *ptra = a;

    printf("enter string: ");
    fgets(ptra, sizeof(a),stdin);

    int length = str_len(ptra);

    printf("string length: %d\n",length);
}