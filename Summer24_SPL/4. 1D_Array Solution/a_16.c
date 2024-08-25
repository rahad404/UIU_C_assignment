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

    int difference[n]; 
    int k = 0; 

    for (int i = 0; i < n; i++) {
        int isInB = 0;
        for (int j = 0; j < m; j++) {
            if (arrA[i] == arrB[j]) {
                isInB = 1;
                break;
            }
        }
        if (!isInB) {
            difference[k++] = arrA[i];
        }
    }

    if (k == 0) {
        printf("Empty set\n");
    } else {
        printf("Difference (A - B): ");
        for (int i = 0; i < k; i++) {
            printf("%d ", difference[i]);
        }
        printf("\n");
    }

    return 0;
}
