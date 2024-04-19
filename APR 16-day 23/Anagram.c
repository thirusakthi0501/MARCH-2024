#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int count[26] = {0};
    scanf("%s", s);
    scanf("%s", t);
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }
    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }
    bool anagram = true;
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            anagram = false;
            break;
        }
    }
    if (anagram) {
        printf("'%s' and '%s' are anagrams.\n", s, t);
    } else {
        printf("'%s' and '%s' are not anagrams.\n", s, t);
    }

    return 0;
}
