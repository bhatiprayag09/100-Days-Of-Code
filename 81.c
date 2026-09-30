#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n')
        i++;

    printf("%d", i);

    return 0;
}
