#include<stdio.h>

int main()
{
    int fhun,ohun,fifty,ten,five,one;
    scanf("%d",&one);

    fhun = one/500;
    one = one%500;
    ohun = one/100;
    one = one%100;
    fifty = one/50;
    one = one%50;
    ten = one/10;
    one = one%10;
    five = one/5;
    one = one%5;

    printf("%d note(s) of 500\n%d note(s) of 100\n%d note(s) of 50\n%d note(s) of 10\n%d note(s) of 5\n%d note(s) of 1\n",fhun,ohun,fifty,ten,five,one);
}