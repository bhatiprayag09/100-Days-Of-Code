#include <stdio.h>

int main() {
    int n, i;
    int factorial = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    printf("%d", factorial);

    return 0;
}