#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int even = 0, odd = 0;

    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Even=%d, Odd=%d", even, odd);

    return 0;
}
