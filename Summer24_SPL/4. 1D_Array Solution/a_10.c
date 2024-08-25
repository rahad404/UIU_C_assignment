#include <stdio.h>

int main() {
    int n, m;

    scanf("%d", &n);
    int arrA[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arrA[i]);
    }

    scanf("%d", &m);
    int arrB[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &arrB[i]);
    }

    int tempA[n];
    int tempM = n; 

    for (int i = 0; i < n; i++) {
        tempA[i] = arrA[i];
    }

    for (int i = 0; i < m; i++) {
        arrA[i] = arrB[i];
    }

    for (int i = 0; i < tempM; i++) {
        arrB[i] = tempA[i];
    }

    printf("Array A: ");
    for (int i = 0; i < m; i++) { 
        printf("%d ", arrA[i]);
    }
    printf("\n");

    printf("Array B: ");
    for (int i = 0; i < tempM; i++) { 
        printf("%d ", arrB[i]);
    }
    printf("\n");

    return 0;
}
