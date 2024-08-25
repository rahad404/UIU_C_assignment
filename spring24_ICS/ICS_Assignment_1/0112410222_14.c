#include<stdio.h>

int same_named_var = 10;

void localFunc(){
    int same_named_var = 20;

    printf("Local: %d\n",same_named_var);
}

int main(){
    printf("Global: %d\n",same_named_var);

    localFunc();

    printf("Global: %d\n",same_named_var);
}
