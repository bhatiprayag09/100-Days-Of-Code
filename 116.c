
#include <stdio.h>

int main() {
    int n, target, i, j;
    int arr[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                printf("%d %d", i, j);
                return 0;
            }
        }
    }

    printf("-1 -1");

    return 0;
}
