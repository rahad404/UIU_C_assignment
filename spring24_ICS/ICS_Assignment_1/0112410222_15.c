#include<stdio.h>

int main(){
    float number;
    scanf("%f",&number);

    printf("val: %10.3f\n",number);
    printf("val: %2f\n",number);
    printf("val: %.2f\n",number);
    printf("val: %.f\n",number);
    printf("val: %.6e\n",number);
}
