#include <stdio.h>

int main() {
    long long n;
    int freq[10] = {0};
    int digit, i, max = 0, result = 0;

    scanf("%lld", &n);

    if (n == 0)
        freq[0]++;

    while (n > 0) {
        digit = n % 10;
        freq[digit]++;
        n /= 10;
    }

    for (i = 0; i < 10; i++) {
        if (freq[i] > max) {
            max = freq[i];
            result = i;
        }
    }

    printf("Most frequent digit=%d", result);

    return 0;
}
