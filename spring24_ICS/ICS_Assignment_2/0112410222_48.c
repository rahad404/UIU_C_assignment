#include<stdio.h>

#define ID 112410222
#define pass 979899 

int main() {
    int x, y;
    printf("Enter your ID: ");
    scanf("%d", &x);

    switch (x == ID) {
        case 1: 
            printf("Enter your password: ");
            scanf("%d", &y);
            
            switch (y>0 && y == pass) {
                case 1:
                    printf("Birth date: 31-01-2004\n");
                    break;
                case 0:
                    printf("Incorrect Password\n");
                    break;
            }
            break;
        case 0:
            printf("Incorrect ID\n");
            break;
    }

    return 0;
}
