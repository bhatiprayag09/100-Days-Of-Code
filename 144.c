
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void display(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f", s.marks);
}

int main() {
    struct Student s;

    scanf("%49s", s.name);
    scanf("%d", &s.roll_no);
    scanf("%f", &s.marks);

    display(s);

    return 0;
}
