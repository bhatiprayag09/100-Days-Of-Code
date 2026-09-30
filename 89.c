#include <stdio.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    fgets(str, sizeof(str), stdin);
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }

    printf("Frequency=%d", count);

    return 0;
}
