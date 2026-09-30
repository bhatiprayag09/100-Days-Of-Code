#include <stdio.h>

int main() {
    char str[100];
    int i;

    fgets(str, sizeof(str), stdin);

    if (str[0] != ' ' && str[0] != '\n')
        printf("%c", str[0]);

    for (i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ' &&
            str[i] != ' ' &&
            str[i] != '\n')
            printf("%c", str[i]);
    }

    return 0;
}
