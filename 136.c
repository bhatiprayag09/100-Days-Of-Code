
#include <stdio.h>

enum Operation {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    int a, b;
    enum Operation op;

    scanf("%d %d", &a, &b);
    scanf("%d", (int *)&op);

    switch(op) {
        case ADD:
            printf("%d", a + b);
            break;

        case SUBTRACT:
            printf("%d", a - b);
            break;

        case MULTIPLY:
            printf("%d", a * b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
