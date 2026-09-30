#include <stdio.h>

int main() {
    int n, first, last, digits = 1, middle, result;

    scanf("%d", &n);

    // Find the last digit
    last = n % 10;

    // Find the first digit and number of digits
    int temp = n;
    while (temp >= 10) {
        temp /= 10;
        digits *= 10;
    }
    first = temp;

    // Remove first and last digits
    middle = (n % digits) / 10;

    // Swap first and last digits
    result = last * digits + middle * 10 + first;

    printf("%d", result);

    return 0;
}
