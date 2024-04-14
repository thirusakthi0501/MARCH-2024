#include <stdio.h>
int main() {
    int q;
    scanf("%d", &q);

    if ((q % 4 == 0 && q % 100 != 0) || (q % 400 == 0))
        printf("leap year");
    else
        printf("not a leap year",q);
}
