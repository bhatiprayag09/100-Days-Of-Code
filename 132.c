
#include <stdio.h>

enum Traffic {
    RED, YELLOW, GREEN
};

int main() {
    enum Traffic light;

    light = RED;

    switch(light) {
        case RED:
            printf("Stop");
            break;

        case YELLOW:
            printf("Wait");
            break;

        case GREEN:
            printf("Go");
            break;
    }

    return 0;
}
