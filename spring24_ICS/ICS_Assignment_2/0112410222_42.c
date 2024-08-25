#include<stdio.h>

int main(){
    float marks;

    printf("enter final score of a subject: ");
    scanf("%f",&marks);

    if(marks<=100 && marks>=90){
        printf("Grade: A\n");
    }
    else if(marks<=89 && marks>=86){
        printf("Grade: A-\n");
    }
    else if(marks<=85 && marks>=82){
        printf("Grade: B+\n");
    }
    else if(marks<=81 && marks>=78){
        printf("Grade: B\n");
    }
    else if(marks<=77 && marks>=74){
        printf("Grade: B-\n");
    }
    else if(marks<=73 && marks>=70){
        printf("Grade: C+\n");
    }
    else if(marks<=69 && marks>=66){
        printf("Grade: C\n");
    }
    else if(marks<=65 && marks>=62){
        printf("Grade: C-\n");
    }
    else if(marks<=61 && marks>=58){
        printf("Grade: D+\n");
    }
    else if(marks<=57 && marks>=55){
        printf("Grade: D\n");
    }
    else if(marks<55 && marks>=0){
        printf("Grade: F\n");
    }
    else{
        printf("Invalid Score.\n");
    }
}