#include<stdio.h>

int main()
{
    int c;
    scanf("%d",&c);

    for(int i=1; i<=c; i++)
    {
        float a,hw,ct,mt,tf;
        scanf("%f %f %f %f %f",&a,&hw,&ct,&mt,&tf);
        
        float total = a+hw+ct+mt+tf;
        int pc = (total/180)*100;
        
        if(pc>=90 && pc<=100) printf("Student %d : A\n",i);
        if(pc>=86 && pc<=89) printf("Student %d : A-\n",i);
        if(pc>=82 && pc<=85) printf("Student %d : B+\n",i);
        if(pc>=78 && pc<=81) printf("Student %d : B\n",i);
        if(pc>=74 && pc<=77) printf("Student %d : B-\n",i);
        if(pc>=70 && pc<=73) printf("Student %d : C+\n",i);
        if(pc>=66 && pc<=69) printf("Student %d : C\n",i);
        if(pc>=62 && pc<=65) printf("Student %d : C-\n",i);
        if(pc>=58 && pc<=61) printf("Student %d : D+\n",i);
        if(pc>=55 && pc<=57) printf("Student %d : D\n",i);
        if(pc<55) printf("Student %d : F",i);
    }
    
}