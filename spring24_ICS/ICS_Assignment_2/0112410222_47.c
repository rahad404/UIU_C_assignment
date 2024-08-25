#include<stdio.h>
#include<math.h>

int main(){
    char ch;
    double x,y,z;

    printf("Enter Case(A,B or C): ");
    scanf("%c",&ch);

    printf("Enter three numbers: \n");
    scanf("%lf %lf %lf",&x,&y,&z);

    if (ch=='a' || ch=='A')
    {
        double a = sqrt(x)+pow(y,4)+(6*z);
        printf("Output: %.2lf\n",a);
    }
    else if (ch=='b' || ch=='B')
    {
        double b = (int)x%(int)y/(int)z;
        printf("Output: %.2lf\n",b);
    }
    else if (ch=='c' || ch=='C')
    {
        printf("Output: %c %c %c\n",(int)x,(int)y,(int)z);
    }
    else{
        printf("Wrong Input\n");
    }
    
}