#include <stdio.h>
#include <string.h>

int main() {
    char n[100];
    scanf("%s", n);
    for (int i = 0; n[i] != '\0'; i++) {
        if (n[i] == '0') {
            n[i] = '1';
        }
    }

    printf("%s\n", n);
}
