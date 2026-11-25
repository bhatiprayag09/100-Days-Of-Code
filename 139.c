
#include <stdio.h>

enum Numbers {
    ONE = 1,
    TWO = 2,
    THREE = 3
};

int main() {
    enum Numbers n;

    n = ONE;
    printf("%d\n", n);

    n = TWO;
    printf("%d\n", n);

    n = THREE;
    printf("%d\n", n);

    return 0;
}
