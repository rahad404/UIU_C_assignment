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

    int intersection[m > n ? n : m]; 
    int k = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arrA[i] == arrB[j]) {
                int alreadyExists = 0;
                for (int l = 0; l < k; l++) {
                    if (intersection[l] == arrA[i]) {
                        alreadyExists = 1;
                        break;
                    }
                }
                if (!alreadyExists) {
                    intersection[k++] = arrA[i];
                }
                break;
            }
        }
    }

    if (k == 0) {
        printf("Empty set\n");
    } else {
        printf("Intersection: ");
        for (int i = 0; i < k; i++) {
            printf("%d ", intersection[i]);
        }
        printf("\n");
    }

    return 0;
}
