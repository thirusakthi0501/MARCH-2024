#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void remove(int a[], int *size) {
    int h[MAX_SIZE] = {0}; 
    int S = 0;
    for (int i = 0; i < *size; i++) {
        if (h[a[i]] == 0) {
            h[a[i]] = 1;
            a[S++] = a[i]; 
        }
    }
    *size = S; 
}

int main() {
    int a[] = {3, 1, 2, 4, 2, 1, 5, 3};
    int size = sizeof(a) / sizeof(a[0]);
    remove(a, &size);
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
