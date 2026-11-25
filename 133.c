
#include <stdio.h>

enum Months {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    enum Months m;

    for(m = JAN; m <= DEC; m++) {
        if(m == FEB) {
            printf("%d days\n", 28);
        }
        else if(m == APR || m == JUN ||
                m == SEP || m == NOV) {
            printf("%d days\n", 30);
        }
        else {
            printf("%d days\n", 31);
        }
    }

    return 0;
}
