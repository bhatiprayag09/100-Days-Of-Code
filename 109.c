
#include <stdio.h>

int main() {
    int n, k, i, j, sum, max;
    int arr[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    max = -2147483647;

    for(i = 0; i <= n - k; i++) {
        sum = 0;

        for(j = i; j < i + k; j++) {
            sum = sum + arr[j];
        }

        if(sum > max) {
            max = sum;
        }
    }

    printf("%d", max);

    return 0;
}
