#include <stdio.h>

int pivotIndex(int nums[], int n) {
    int totalSum = 0;
    int leftSum = 0;

    // Calculate total sum
    for (int i = 0; i < n; i++) {
        totalSum += nums[i];
    }

    // Find pivot index
    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - nums[i];

        if (leftSum == rightSum) {
            return i;
        }

        leftSum += nums[i];
    }

    return -1;
}

int main() {
    int nums[] = {1, 7, 3, 6, 5, 6};
    int n = sizeof(nums) / sizeof(nums[0]);

    printf("%d\n", pivotIndex(nums, n));

    return 0;
}