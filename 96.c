#include <stdio.h>

int main() {
    char str[200];
    int i = 0, start, end;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        while (str[i] == ' ')
            i++;

        start = i;

        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
            i++;

        end = i - 1;

        while (end >= start) {
            printf("%c", str[end]);
            end--;
        }

        if (str[i] == ' ')
            printf(" ");
    }

    return 0;
}
