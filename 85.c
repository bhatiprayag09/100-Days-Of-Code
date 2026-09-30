#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n')
        length++;

    for (i = length - 1; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}
