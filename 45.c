#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (float)(2 * i) / (4 * i - 1);
    }

    printf("Approximate sum: %.2f", sum);

    return 0;
}
