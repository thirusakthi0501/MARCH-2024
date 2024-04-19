#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[100];
    scanf("%s", s);
    char vowels[100];
    int vowel_count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (strchr("AEIOUaeiou", s[i]) != NULL) {
            vowels[vowel_count++] = s[i];
        }
    }
    for (int i = 0, j = vowel_count - 1; i < j; i++, j--) {
        char temp = vowels[i];
        vowels[i] = vowels[j];
        vowels[j] = temp;
    }
    int k = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (strchr("AEIOUaeiou", s[i]) != NULL) {
            printf("%c", vowels[k++]);
        } else {
            printf("%c", s[i]);
        }
    }

    return 0;
}
