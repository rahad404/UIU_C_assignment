#include<stdio.h>

int main(){
    // input strings
    char str1[30],str2[30];
    puts("enter string: ");
    gets(str1);
    puts("enter word: ");
    gets(str2);

    // get length
    int len1=0,len2=0;
    for(int i=0;str1[i]!=0;i++){
        len1++;
    }
    for(int i=0;str2[i]!=0;i++){
        len2++;
    }

    // count specific string in str1 
    int temp=0,count=0;
    for(int i=0;i<len1;i++){
        temp=i;
        i=temp;
        for(int j=0;j<len2;j++){
            if(str1[i]==str2[j]){
                i++;
            }
        }
        if(i-temp==len2){
            count++;
        }
    }
    printf("count: %d",count);
}