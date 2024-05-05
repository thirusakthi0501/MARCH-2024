#include <stdio.h>
int main() {
    int q;
    scanf("%d", &q);
    while (q--) {
        int n;
        scanf("%d", &n);
        int ans = n;
        int tsk = 2;
        while (tsk * tsk <= n) {
            if (n % tsk == 0) {
                while (n % tsk == 0) {
                    n /= tsk;
                }
                ans -= ans / tsk;
            }
            tsk++;
        }
        if (n > 1) {
            ans -= ans / n;
        }
        printf("%d\n", ans);
    }
    return 0;
}
