#include<stdio.h>

int main(){
    
    // input arrayA and arrayB
    int n;
    printf("n: ");
    scanf("%d",&n);
    printf("arrA: ");
    int arrA[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arrA[i]);
    }

    int m;
    printf("m: ");
    scanf("%d",&m);
    printf("arrB: ");
    int arrB[m];
    for(int i=0;i<m;i++){
        scanf("%d",&arrB[i]);
    }

    // copying arrA to arrC then arrB to arrC
    int arrC[m+n];
    for(int i=0;i<n;i++){
        arrC[i]=arrA[i];
    }
    for(int i=0;i<m;i++){
        arrC[n+i]=arrB[i];
    }    

    // removing duplicates to get union 
    int unionSize = 0;
    int unionArray[n + m]; 

    for (int i = 0; i < (n + m); i++) {
        int isDuplicate = 0;
        for (int j = 0; j < unionSize; j++) {
            if (arrC[i] == unionArray[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unionArray[unionSize++] = arrC[i];
        }
    }

    // Printing the union array
    for (int i = 0; i < unionSize; i++) {
        printf("%d ", unionArray[i]);
    }
    printf("\n");
    

    
}