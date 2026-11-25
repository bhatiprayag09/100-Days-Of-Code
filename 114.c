
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, j, k;
    int count, max = 0, repeat;

    scanf("%s", s);

    int n = strlen(s);

    for(i = 0; i < n; i++) {
        count = 0;

        for(j = i; j < n; j++) {
            repeat = 0;

            for(k = i; k < j; k++) {
                if(s[k] == s[j]) {
                    repeat = 1;
                    break;
                }
            }

            if(repeat == 1) {
                break;
            }

            count++;
        }

        if(count > max) {
            max = count;
        }
    }

    printf("%d", max);

    return 0;
}
