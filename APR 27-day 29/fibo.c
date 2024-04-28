// Write a Program to Find fibonacci series upto N
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int l[n];
    l[0] = 0;
    l[1] = 1;

    for (int i = 2; i <= n; i++) {
        l[i] = l[i - 1] + l[i - 2];
    }

    for (int i = 0; i <= n; i++) {
        printf("%d ", l[i]);
    }

    return 0;
}
