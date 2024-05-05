#include <stdio.h>
#include <string.h>

int main() {
    char roman[] = "MCMXCIV";
    int r= 0;
    int p = 0;

    for (int i = strlen(roman) - 1; i >= 0; i--) {
        int v;
        switch (roman[i]) {
            case 'I': v = 1;break;
            case 'V': v= 5; break;
            case 'X': v= 10; break;
            case 'L': v= 50; break;
            case 'C': v= 100; break;
            case 'D': v = 500; break;
            case 'M': v= 1000; break;
            default:
                printf("Invalid Roman numeral.\n");
                return -1;
        }
        
        if (v < p) {
            r -= v;
        } else {
            r += v;
        }
        p= v;
    }
    
    printf("Integer value: %d\n", r);
    return 0;
}
