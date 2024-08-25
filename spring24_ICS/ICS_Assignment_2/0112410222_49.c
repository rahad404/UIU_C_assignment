#include<stdio.h>
#include<math.h>

int main(){
    char type;

    printf("\t-------------------------\n");
    printf("\t| Welcome to Calculator |\n");
    printf("\t-------------------------\n\n");

    printf("------------------------------------\n");
    printf("* Type 'a' for +,-,*,/\n");
    printf("* Type 'b' for sin,cos,tan\n");
    printf("* Type 'c' for power & square root\n");
    printf("------------------------------------\n");
    printf("# Type here (a,b,c): ");
    scanf("%c",&type);
    printf("------------------------------------\n");


    int x,y;
    char opa;

    float c;
    char opb;

    int p,q;
    char opc;

    switch(type){
        case 'a':
            printf("# Enter first number: ");
            scanf("%d",&x);
            printf("# Enter operator(+-*/): ");
            getchar();
            scanf("%c",&opa);
            printf("# Enter second number: ");
            scanf("%d",&y);
            printf("------------------------------------\n");

            switch(opa){
                case '+':
                    printf("Ans: %d\n",(x+y));
                    break;
                case '-':
                    printf("Ans: %d\n",(x-y));
                    break;
                case '*':
                    printf("Ans: %d\n",(x*y));
                    break;
                case '/':
                    if(y==0){
                        printf("Zero as divisor is not valid!\n");
                    }
                    else{
                        printf("Ans: %.2f\n",((float)x/(float)y));
                    }
                    break;
            }
            break;
        case 'b':
            printf("* Type 's' for sin\n");
            printf("* Type 'c' for cos\n");
            printf("* Type 't' for tan\n");
            printf("------------------------------------\n");
            printf("# Type here(s,c,t): ");
            getchar();
            scanf("%c",&opb);

            printf("# Enter the number: ");
            scanf("%f",&c);
            printf("------------------------------------\n");

            switch(opb){
                case 's':
                    printf("Ans: %.2f\n",sin(c));
                    break;
                case 'c':
                    printf("Ans: %.2f\n",cos(c));
                    break;
                case 't':
                    printf("Ans: %.2f\n",tan(c));
                    break;
            }
            break;
        case 'c':
            printf("* Type 'p' for power\n");
            printf("* Type 'r' for square root\n");
            printf("------------------------------------\n");
            printf("# Type here(p,r): ");
            getchar();
            scanf("%c",&opc);
            
            switch(opc){
                case 'p':
                    printf("# Enter the number: ");
                    scanf("%d",&q);
                    printf("# Enter the power: ");
                    scanf("%d",&p);
                    printf("------------------------------------\n");
                    printf("Ans: %lf\n",pow(q,p));
                    break;
                case 'r':
                    printf("# Enter the number: ");
                    scanf("%d",&q);
                    printf("------------------------------------\n");
                    printf("Ans: %.3f\n",sqrt(q));
                    break;
            }
            break;
    }

}