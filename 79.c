#include <stdio.h>

int main() {
    int r, c, i, j;

    int a[10][10];

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    // Upper diagonals
    for (int k = 0; k < c; k++) {
        i = 0;
        j = k;

        while (i < r && j < c) {
            printf("%d ", a[i][j]);
            i++;
            j++;
        }
    }

    // Lower diagonals
    for (int k = 1; k < r; k++) {
        i = k;
        j = 0;

        while (i < r && j < c) {
            printf("%d ", a[i][j]);
            i++;
            j++;
        }
    }

    return 0;
}
