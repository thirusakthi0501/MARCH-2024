#include <stdio.h>

int main() {
    long long o, b = 0;
    int i = 0, d;
    scanf("%lld", &o);
    while (octalNumber != 0) {
        d = o % 10;
        while (i < 3) {
            b += (d % 2) << i;
            digit /= 2;
            i++;
        }
        i = 0;
        o /= 10;
    }
    printf(" %lld", binaryNumber);

}
