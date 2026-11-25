
#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, i;
    float marks;

    fp = fopen("students.txt", "w");

    if(fp == NULL) {
        printf("File error");
        return 0;
    }

    for(i = 0; i < 3; i++) {
        scanf("%49s", name);
        scanf("%d", &roll);
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    if(fp == NULL) {
        printf("File error");
        return 0;
    }

    while(fscanf(fp, "%49s %d %f",
                 name, &roll, &marks) == 3) {
        printf("%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}
