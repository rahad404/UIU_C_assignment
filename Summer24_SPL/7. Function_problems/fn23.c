#include<stdio.h>
#include<string.h>

int str_length(char str[]){
    int length=0;
    while(str[length]!='\0'){
        length++;
    }
    return length;
}

int find_substr(char a[], char b[]){
    int len_a = str_length(a);
    int len_b = str_length(b);
    if(len_a<len_b){
        return -1;
    }
    else if(strstr(a,b)!= NULL){
        return 1;
    }
    else{
        return 0;
    }

}

int main(){
    char a[100],b[100];

    printf("enter string: ");
    scanf("%s",a);
    printf("enter substring: ");
    scanf("%s",b);

    int result = find_substr(a,b);

    printf("result: %d\n",result);
}