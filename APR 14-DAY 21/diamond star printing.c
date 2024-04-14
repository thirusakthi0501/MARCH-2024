#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int i, j;
    for (i = 0; i < n; i++) {
        for (int k = 0; k < n - i; k++) {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = n - 2; i >= 0; i--) {
        for (int k = 0; k < n - i; k++) {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
