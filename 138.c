
#include <stdio.h>

enum Days {
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY,
    THURSDAY, FRIDAY, SATURDAY
};

int main() {
    char *names[] = {
        "SUNDAY", "MONDAY", "TUESDAY",
        "WEDNESDAY", "THURSDAY",
        "FRIDAY", "SATURDAY"
    };

    int i;

    for(i = 0; i < 7; i++) {
        printf("%s = %d\n", names[i], i);
    }

    return 0;
}
