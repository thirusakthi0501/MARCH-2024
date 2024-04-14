#include <stdio.h>
#include <string.h>

int main() {
    char str[10000];
  scanf("%s",str); 
    int l = strlen(str);
    int h = 0;
    for (int i = 0; i < l; i++) {
        if (str[i] == '#') {
            char temp = str[i];
            str[i] = str[h];
            str[h] = temp;
            h++;
        }
    }
    printf("%s", str);
}
