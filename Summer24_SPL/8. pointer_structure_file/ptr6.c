#include<stdio.h>
#include<string.h>

int Vowel(char *str){
    int v = 0;
    while (*str!='\0')
    {
        if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u'||
        *str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U'){
            v++;
        }
        str++;
    }
    return v;
    
}
int Consonant(char *str){
    int c = 0;
    while (*str!='\0')
    {
        if((*str>='a'&&*str<='z'||*str>='A'&&*str<='Z')&&!(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u'||
        *str=='A'||*str=='E'||*str=='I'||*str=='O'||*str=='U')){
            c++;
        }
        str++;
    }
    return c;
}

int main(){
    char str[100];
    char *ptrs=str;

    printf("enter string: ");
    fgets(str, sizeof(str), stdin);

    int vowel = Vowel(ptrs);
    int consonant = Consonant(ptrs);

    printf("vowel count: %d\n",vowel);
    printf("consonant count: %d\n",consonant);
}