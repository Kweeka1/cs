#include "stdio.h"

typedef struct Student {
    char* name;
    int age;
    float average_score;
};

typedef struct Date {
    int dd;
    int mm;
    int yy;
};

typedef struct Animal {
    char* type;
    int legs;
} Animal;

int main() {
    typedef struct Classroom {
        char* section;
        char* tools;
    };

    struct Student stud = {
            .name = "Peter",
            .age = 22,
            .average_score = 12.69,
    };

    // no need to add struct
     Animal an = {
            .type = "mammal",
            .legs = 4,
    };

    struct Date a = {};

    scanf("%2d%2d%4d", &a.dd, &a.mm, &a.yy);
    printf("%d %d %d\n",  a.dd, a.mm, a.yy);
    scanf("%d/%d/%d", &a.dd, &a.mm, &a.yy);
    printf("%d %d %d\n",  a.dd, a.mm, a.yy);

    return 0;
}
