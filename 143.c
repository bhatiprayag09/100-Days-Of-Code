
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i, max = 0;

    for(i = 0; i < 5; i++) {
        scanf("%49s", s[i].name);
        scanf("%d", &s[i].roll_no);
        scanf("%f", &s[i].marks);
    }

    for(i = 1; i < 5; i++) {
        if(s[i].marks > s[max].marks) {
            max = i;
        }
    }

    printf("Top Student: %s\n", s[max].name);
    printf("Roll No: %d\n", s[max].roll_no);
    printf("Marks: %.2f", s[max].marks);

    return 0;
}
