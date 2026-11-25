
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    for(i = 0; i < 5; i++) {
        scanf("%49s", s[i].name);
        scanf("%d", &s[i].roll_no);
        scanf("%f", &s[i].marks);
    }

    for(i = 0; i < 5; i++) {
        printf("%s %d %.2f\n",
               s[i].name,
               s[i].roll_no,
               s[i].marks);
    }

    return 0;
}
