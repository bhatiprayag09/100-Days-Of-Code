#include <stdio.h>

int main() {
    int n, digit, product = 1;

    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;

        if (digit % 2 != 0) {
            product *= digit;
        }

        n /= 10;
    }

    printf("%d", product);

    return 0;
}
