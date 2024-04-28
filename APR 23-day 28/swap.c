#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int n;
    scanf("%d", &n);

    int l[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &l[i]);
    }

    int k = n / 2;
    for (int i = 0; i < k - 1; i++) {
        for (int j = 0; j < k - i - 1; j++) {
            if (l[j] > l[j + 1]) {
                swap(&l[j], &l[j + 1]);
            }
        }
    }
    for (int i = k; i < n - 1; i++) {
        for (int j = k; j < n - i + k - 1; j++) {
            if (l[j] < l[j + 1]) {
                swap(&l[j], &l[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", l[i]);
    }
    
    return 0;
}
