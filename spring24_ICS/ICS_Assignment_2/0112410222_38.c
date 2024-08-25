#include<stdio.h>

int main(){
    int x,y;

    printf("Enter the value X: ");
    scanf("%d",&x);
    printf("Enter the value Y: ");
    scanf("%d",&y);

    if (x>y){
        printf("%d is greater then %d\n",x,y);
    }
    else if (x<y){
        printf("%d is less then %d\n",x,y);
    }
    else{
        printf("%d is equal to %d\n",x,y);
    }

}