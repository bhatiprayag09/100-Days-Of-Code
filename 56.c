#include <stdio.h>

int main() {
    int n, i;
    int arr[100];

    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print array elements
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
