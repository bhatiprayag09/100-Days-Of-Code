
#include <stdio.h>

int main() {
    FILE *fp;
    char str[1000];

    fp = fopen("info.txt", "r");

    if(fp == NULL) {
        printf("File not found");
        return 0;
    }

    while(fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }

    fclose(fp);

    return 0;
}
