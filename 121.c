
#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;

    scanf("%49s", name);
    scanf("%d", &age);

    fp = fopen("info.txt", "w");

    if(fp == NULL) {
        printf("File cannot be opened");
        return 0;
    }

    fprintf(fp, "Name: %s\nAge: %d", name, age);

    fclose(fp);

    printf("Data saved successfully");

    return 0;
}
