#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c;

    printf("enter a: ");
    scanf("%f",&a);
    printf("enter a: ");
    scanf("%f",&b);
    printf("enter a: ");
    scanf("%f",&c);

    float va,sq,r1,r2;
    va = b*b-4*a*c;
    sq = sqrt(va);
    r1 = (-b+sq)/(2*a);
    r2 = (-b-sq)/(2*a);
    
    if (r1>=0 || r1<=0){
        printf("\n%.2f,   ",r1);
    }
    else {
        printf("\nimaginary,   ");
    }
    if (r2>=0 || r2<=0){
        printf("%.2f\n",r2);
    }
    else {
        printf("imaginary\n");
    }
    
}
