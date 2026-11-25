
#include <stdio.h>

int main() {
    int n, i, j, product;
    int arr[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        product = 1;

        for(j = 0; j < n; j++) {
            if(i != j) {
                product = product * arr[j];
            }
        }

        printf("%d ", product);
    }

    return 0;
}
