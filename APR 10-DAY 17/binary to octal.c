#include <stdio.h>

int main() {
    long long q;
    int o = 0, d = 0, i = 0;
    scanf("%lld", &q);
    while (q != 0) {
        d += (q % 10) * (1 << i);
        ++i;
         q /= 10;
    }
    i = 1;
    while (d!= 0) {
        o+= (d % 8) * i;
        d /= 8;
        i *= 10;
    }

    printf(" %d", o);

    return 0;
}
