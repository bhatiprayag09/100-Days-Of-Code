
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp1, *fp2;
    int ch;

    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");

    if(fp1 == NULL || fp2 == NULL) {
        printf("File cannot be opened");
        if(fp1 != NULL) fclose(fp1);
        if(fp2 != NULL) fclose(fp2);
        return 0;
    }

    while((ch = fgetc(fp1)) != EOF) {
        fputc(toupper(ch), fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("Conversion successful");

    return 0;
}
