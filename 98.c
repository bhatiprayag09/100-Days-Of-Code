#include <stdio.h>

int main() {
    char str[100];
    int i, lastSpace = -1;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            lastSpace = i;
    }

    if (str[0] != ' ')
        printf("%c. ", str[0]);

    for (i = 1; i < lastSpace; i++) {
        if (str[i - 1] == ' ' && str[i] != ' ')
            printf("%c. ", str[i]);
    }

    for (i = lastSpace + 1; str[i] != '\0' && str[i] != '\n'; i++)
        printf("%c", str[i]);

    return 0;
}
