#include <stdio.h>

int main() {
    char str[200];
    char longest[100];
    int i = 0, j = 0, maxLength = 0, length;

    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            j = 0;
            length = 0;

            while (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
                if (j < 99)
                    longest[j++] = str[i];

                length++;
                i++;
            }

            if (length > maxLength) {
                maxLength = length;
                longest[j] = '\0';
            }
        } else {
            if (str[i] == '\0' || str[i] == '\n')
                break;

            i++;
        }
    }

    printf("%s", longest);

    return 0;
}
