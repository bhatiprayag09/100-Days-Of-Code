
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    int total = n * (n + 1) / 2;

    printf("%d", total - sum);

    return 0;
}
