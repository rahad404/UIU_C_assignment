#include<stdio.h>

//function to compare number
void compare(int x, int y)
{
    if(x>y) printf("%d is greater than %d",x,y);
    else if(x<y) printf("%d is less than %d",x,y);
    else printf("%d is equal to %d",x,y);
}

// main function 
int main()
{
    int a, b;
    scanf("%d%d",&a,&b);
    compare(a,b);
}