
#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int sum, max;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sum = arr[0];
    max = arr[0];

    for(i = 1; i < n; i++) {
        if(sum < 0) {
            sum = arr[i];
        } else {
            sum = sum + arr[i];
        }

        if(sum > max) {
            max = sum;
        }
    }

    printf("%d", max);

    return 0;
}
