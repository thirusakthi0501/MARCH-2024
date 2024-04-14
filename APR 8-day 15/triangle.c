#include <stdio.h>

int main() {
    int arr[] = {4, 7, 3, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int t[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (i == 0) {
                t[i][j] = arr[j];
            } else { 
                t[i][j] = t[i - 1][j] + t[i - 1][j + 1];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", te[i][j]);
        }
        printf("\n");
    }

}
