#include <stdio.h>

int main() {
    int n, original, digit, sum = 0;

    scanf("%d", &n);

    original = n;

    while (n > 0) {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }

    if (sum == original) {
        printf("Armstrong");
    } else {
        printf("Not Armstrong");
    }

    return 0;
}