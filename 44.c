#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (float)(2 * i - 1) / (2 * i);
    }

    printf("Approximate sum: %.1f", sum);

    return 0;
}
