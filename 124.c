
#include <stdio.h>

int main() {
    FILE *source, *destination;
    char file1[100], file2[100];
    int ch;

    scanf("%99s", file1);
    scanf("%99s", file2);

    source = fopen(file1, "r");

    if(source == NULL) {
        printf("Source file not found");
        return 0;
    }

    destination = fopen(file2, "w");

    if(destination == NULL) {
        printf("Destination file cannot be opened");
        fclose(source);
        return 0;
    }

    while((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully");

    return 0;
}
