#include<stdio.h>

void even_odd(int x); //function prototype

// main function 
int main()
{
    int a;
    printf("Enter number: ");

    scanf("%d",&a);
    even_odd(a);
}

// even odd function 
void even_odd(int x)
{
    if (x%2 == 0) printf("\nEven\n");
    else printf("\nOdd\n");
}