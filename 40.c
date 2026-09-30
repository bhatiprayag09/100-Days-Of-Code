#include <stdio.h>

int main() {
    long long n, digit, result = 0, place = 1;

    scanf("%lld", &n);

    while (n > 0) {
        digit = n % 10;

        if (digit == 0)
            digit = 1;
        else
            digit = 0;

        result += digit * place;
        place *= 10;
        n /= 10;
    }

    printf("%lld", result);

    return 0;
}
