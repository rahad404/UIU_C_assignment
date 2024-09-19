#include<stdio.h>

int main(){
    int choice,n=0;
    char name[10][20]={0};
    int roll[10]={0};
    float marks[10]={0};

    while (choice!=6){
        printf("\n--- Student Management System ---\n\n");
        printf("1. Add Students\n");
        printf("2. Display All Students\n");
        printf("3. Search for a Student\n");
        printf("4. Calculate Average Marks\n");
        printf("5. Find Student with Highest Marks\n");
        printf("6. Exit\n\n");
        printf("Enter your choice: ");

        scanf("%d",&choice);
        printf("\n");

        // 1. add student block
        if(choice == 1 && n<10){

            printf("Enter the name of the student: ");
            scanf("%19s",name[n]);
            printf("Enter the roll number: ");
            scanf("%d",&roll[n]);
            printf("Enter the marks: ");
            scanf("%f",&marks[n]);
            n++;
            if(n>9){
                printf("\n-----------------------------\n");
                printf("limit exceeded.");
                printf("\n-----------------------------\n");
            }
        }

        // 2. display all students block
        else if(choice == 2){
            printf("-------------------------------------------------------------------------\n");
            for(int i=0; i<n; i++){
                printf("Name: %s, Roll: %d, Marks: %.2f\n",name[i],roll[i],marks[i]);
            }
            printf("-------------------------------------------------------------------------\n");
        }

        // 3. search student block
        else if(choice == 3){
            printf("Enter Roll number to search: ");
            int r;
            scanf("%d",&r);
            for(int i=0; i<n; i++){
                if(r == roll[i]){
                    r = i;
                    break;
                }
            }
            printf("\n--------------------------------------------------------------\n");
            printf("Student found: Name: %s, Roll: %d, Marks: %.2f\n",name[r],roll[r],marks[r]);
            printf("--------------------------------------------------------------\n");
        }

        // 4. calculate avg mark block
        else if(choice == 4){
            float sum=0;
            int count=0;
            for(int i=0; i<n; i++){
                sum += marks[i];
                count++;
            }
            printf("--------------------------------------\n");
            printf("Average marks of the class: %.2f\n",sum/(float)count);
            printf("--------------------------------------\n");
        }

        // 5. student with highest mark block
        else if(choice == 5){
            float max = 0;
            int m;
            for(int i=0; i<n; i++){
                if(marks[i] > max){
                    max = marks[i];
                    m = i;
                }
            }
            printf("-------------------------------------------------------------------------\n");
            printf("Student with highest marks: Name: %s, Roll: %d, Marks: %.2f\n",name[m],roll[m],marks[m]);
            printf("-------------------------------------------------------------------------\n");
        }
    }
    printf("----------------------\n");
    printf("Exiting the program...\n");
    printf("----------------------\n");
}
