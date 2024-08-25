#include<stdio.h>

int main(){
    int x,n1,n2,n3;
    printf("Player-1--> prck a number: ");
    scanf("%d",&x);

    printf("Player-2--> guess the number: ");
    scanf("%d",&n1);

    if (n1==x){
        printf("Right,Player-2 wins!\n");
    }
    else{
        printf("Wrong, 2 chance left\n");
        printf("Player-2--> guess the number: ");
        scanf("%d",&n2);
        if (n2==x){
            printf("Right,Player-2 wins!\n");
        }
        else{
            printf("Wrong, 1 chance left\n");
            printf("Player-2--> guess the number: ");
            scanf("%d",&n3);
            if (n3==x){
                printf("Right,player-2 wins!\n");
            }
            else{
                printf("Wrong, 0 chance left\n");
                printf("Player-1 wins!\n");
            } 
        }
    }
}
