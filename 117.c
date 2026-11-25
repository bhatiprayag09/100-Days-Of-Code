
#include <stdio.h>

int main() {
    int m, n, i, j, temp;
    int a[100], b[100], c[200];

    scanf("%d", &m);

    for(i = 0; i < m; i++) {
        scanf("%d", &a[i]);
        c[i] = a[i];
    }

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &b[i]);
        c[m + i] = b[i];
    }

    for(i = 0; i < m + n - 1; i++) {
        for(j = 0; j < m + n - i - 1; j++) {
            if(c[j] > c[j + 1]) {
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }

    for(i = 0; i < m + n; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
