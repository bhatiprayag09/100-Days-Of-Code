#include <stdio.h>

int main() {
    int n, i, value, pos;

    int arr[101];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &value);

    pos = 0;

    while (pos < n && arr[pos] < value)
        pos++;

    for (i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = value;
    n++;

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
