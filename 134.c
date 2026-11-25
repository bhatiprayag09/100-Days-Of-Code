
#include <stdio.h>

enum Status {
    SUCCESS, FAILURE, TIMEOUT
};

int main() {
    enum Status s;

    s = SUCCESS;

    switch(s) {
        case SUCCESS:
            printf("Operation Successful");
            break;

        case FAILURE:
            printf("Operation Failed");
            break;

        case TIMEOUT:
            printf("Time Out");
            break;
    }

    return 0;
}
