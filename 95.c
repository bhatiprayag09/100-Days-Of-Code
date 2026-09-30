#include <stdio.h>

int main() {
    char a[100], b[100], combined[200];
    int lenA = 0, lenB = 0, i, j;
    int found = 0;

    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    while (a[lenA] != '\0' && a[lenA] != '\n')
        lenA++;

    while (b[lenB] != '\0' && b[lenB] != '\n')
        lenB++;

    if (lenA != lenB) {
        printf("Not rotation");
        return 0;
    }

    for (i = 0; i < lenA; i++)
        combined[i] = a[i];

    for (i = 0; i < lenA; i++)
        combined[lenA + i] = a[i];

    combined[2 * lenA] = '\0';

    for (i = 0; i <= 2 * lenA - lenB; i++) {
        found = 1;

        for (j = 0; j < lenB; j++) {
            if (combined[i + j] != b[j]) {
                found = 0;
                break;
            }
        }

        if (found)
            break;
    }

    if (found)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
