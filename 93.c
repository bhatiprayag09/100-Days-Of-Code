#include <stdio.h>

int main() {
    char a[100], b[100];
    int freq[256] = {0};
    int i, anagram = 1;

    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    for (i = 0; a[i] != '\0'; i++) {
        if (a[i] != '\n')
            freq[(unsigned char)a[i]]++;
    }

    for (i = 0; b[i] != '\0'; i++) {
        if (b[i] != '\n')
            freq[(unsigned char)b[i]]--;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            anagram = 0;
            break;
        }
    }

    if (anagram)
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}
