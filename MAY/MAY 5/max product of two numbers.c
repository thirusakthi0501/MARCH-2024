#include <stdio.h>

int maxProduct(int arr[], int size) {
    if (size < 2) {
        printf("Array size should be at least 2.\n");
        return -1;
    }
    int max1 = arr[0];
    int max2 = arr[1];
    for (int i = 2; i < size; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }
    return max1 * max2;
}

int main() {
    int size;
    scanf("%d", &size);
    if (size < 2) {
        printf("Array size should be at least 2.\n");
        return -1;
    }
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int max_product = maxProduct(arr, size);
    printf("Maximum product : %d\n", max_product);
    
    return 0;
}

