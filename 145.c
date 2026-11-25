
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student topStudent(struct Student s[]) {
    int i, max = 0;

    for(i = 1; i < 5; i++) {
        if(s[i].marks > s[max].marks) {
            max = i;
        }
    }

    return s[max];
}

int main() {
    struct Student s[5], top;
    int i;

    for(i = 0; i < 5; i++) {
        scanf("%49s", s[i].name);
        scanf("%d", &s[i].roll_no);
        scanf("%f", &s[i].marks);
    }

    top = topStudent(s);

    printf("Top Student: %s\n", top.name);
    printf("Roll No: %d\n", top.roll_no);
    printf("Marks: %.2f", top.marks);

    return 0;
}
