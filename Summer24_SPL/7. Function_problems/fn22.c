#include<stdio.h>
#include<string.h>

int find_substr(const char *str, const char *sub){
    if(strstr(str,sub)!= NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    char str[100], sub[100];

    scanf("%s",str);
    scanf("%s",sub);
                                   
    int check = find_substr(str,sub);

    printf("%d\n",check);
}