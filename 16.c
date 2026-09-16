#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("Largest is %d", a);
    } else if (b >= a && b >= c) {
        printf("Largest is %d", b);
    } else {
        printf("Largest is %d", c);
    }

    return 0;
}