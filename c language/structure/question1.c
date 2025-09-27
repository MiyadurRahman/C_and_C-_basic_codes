#include <stdio.h>

struct student {
    char name[50];
    char id[20];
    float cgpa;
};

int main() {
    struct student s1 = {"John Doe", "ID12345", 3.75};
    printf("Name: %s\n", s1.name);
    printf("ID: %s\n", s1.id);
    printf("CGPA: %.2f\n", s1.cgpa);
    return 0;
}
