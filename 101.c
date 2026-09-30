#include <stdio.h>

int main() {
    int n, target, i;
    int nums[100];
    int low, high, mid;
    int first = -1, last = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    scanf("%d", &target);

    // Find first occurrence
    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (nums[mid] == target) {
            first = mid;
            high = mid - 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Find last occurrence
    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (nums[mid] == target) {
            last = mid;
            low = mid + 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("%d,%d", first, last);

    return 0;
}
