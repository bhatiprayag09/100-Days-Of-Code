#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[100];

    scanf("%d", &n);

    // Read array elements and calculate sum
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%d", sum);

    return 0;
}
