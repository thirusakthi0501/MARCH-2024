///Write a Program to print the Maximum and Minimum elements in an array. 

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int l[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &l[i]);
    }

    int max = l[0];
    int min = l[0];
    for (int i = 1; i < n; i++) {
        if (l[i] > max) {
            max = l[i];
        }
        if (l[i] < min) {
            min = l[i];
        }
    }
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);

    return 0;
}
