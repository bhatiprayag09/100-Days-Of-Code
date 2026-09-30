#include <stdio.h>

int main() {
    int i, j, stars;

    // Increasing part
    for (i = 1; i <= 5; i++) {
        stars = 2 * i - 1;

        for (j = 1; j <= stars; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Decreasing part
    for (i = 4; i >= 1; i--) {
        stars = 2 * i - 1;

        for (j = 1; j <= stars; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
