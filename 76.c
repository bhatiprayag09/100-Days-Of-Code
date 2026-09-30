#include <stdio.h>

int main() {
    int n, i, j, symmetric = 1;
    int a[10][10];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric)
        printf("Symmetric matrix");
    else
        printf("Not symmetric matrix");

    return 0;
}
