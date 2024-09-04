#include<stdio.h>

// function to check positive or negative number
void check_number(int x)
{
    if(x>0) printf("Positive");
    else if(x<0) printf("Negative");
    else printf("Zero");
}

// main function 
int main()
{
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    check_number(a);
}