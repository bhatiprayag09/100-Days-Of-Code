#include <stdio.h>

int main() {
    int n, i, key, found = 0;
    int arr[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Element not found");

    return 0;
}
