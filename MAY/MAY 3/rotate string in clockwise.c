#include <stdio.h>
#include <string.h>

int main() {
    char str[1000] ;
    int n ;
  scanf("%s",str);
  scanf("%d",&n);
    int length = strlen(str);
    n = n % length;
   for (int i = 0; i < n; i++) {
        char temp = str[length - 1];
        for (int j = length - 1; j > 0; j--) {
            str[j] = str[j - 1];
        }
        str[0] = temp;
    }

    printf("After %d clockwise rotations: %s\n", n, str);

    return 0;
}

