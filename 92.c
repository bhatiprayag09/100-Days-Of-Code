#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int i, found = 0;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (freq[str[i] - 'a'] > 0) {
                printf("%c", str[i]);
                found = 1;
                break;
            }

            freq[str[i] - 'a']++;
        }
    }

    if (!found)
        printf("No repeating alphabet");

    return 0;
}
