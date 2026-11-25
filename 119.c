
#include <stdio.h>

int main() {
    int n, i, x;
    int arr[100];
    int count[1001] = {0};

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        x = arr[i];
        count[x]++;

        if(count[x] == 2) {
            printf("%d", x);
            return 0;
        }
    }

    return 0;
}
