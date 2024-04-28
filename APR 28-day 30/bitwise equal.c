//Write a  Program to check if two numbers are equal without using the bitwise operator.
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a == b) {
        printf("Same\n");
    } else {
        printf("Not Same\n");
    }

    return 0;
}
