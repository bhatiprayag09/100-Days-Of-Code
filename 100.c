#include <stdio.h>

int main() {
    char str[100];
    int i, j, k, length = 0;

    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n')
        length++;

    for (i = 0; i < length; i++) {
        for (j = i; j < length; j++) {

            for (k = i; k <= j; k++)
                printf("%c", str[k]);

            printf("\n");
        }
    }

    return 0;
}
