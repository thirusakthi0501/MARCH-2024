#include <stdio.h>

int main() {
    int a[] = {64, 34, 25, 12, 22, 11, 90};
    int n = 7; 
    int i, j, t;

    printf("Original array: \n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (a[j] > a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }

    printf("Sorted array: \n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
