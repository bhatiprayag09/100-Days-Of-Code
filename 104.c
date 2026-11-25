
#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);

    int total = n * (n + 1) / 2;

    for (x = 1; x <= n; x++) {
        int left = x * (x + 1) / 2;
        int right = total - (x * (x - 1) / 2);

        if (left == right) {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");

    return 0;
}
