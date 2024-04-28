//Write a program to find Maximum and Minimum in a Set

#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int l[MAX_SIZE];
    printf("Enter the elements: ");
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
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
