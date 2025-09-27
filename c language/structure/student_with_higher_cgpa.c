#include <stdio.h>

struct Student {
    char name[100];
    char id[20];
    float cgpa;
};

int main() {
    struct Student students[2];
    int i, max_index = 0;

    for (i = 0; i < 2; i++) {
        printf("Enter name: ");
        gets(students[i].name);

        printf("Enter ID: ");
        gets(students[i].id);

        printf("Enter CGPA: ");
        scanf("%f", &students[i].cgpa);
        getchar(); // Consume the newline after scanf
    }

    // Find the student with the higher CGPA
    for (i = 1; i < 2; i++) {
        if (students[i].cgpa > students[max_index].cgpa) {
            max_index = i;
        }
    }

    printf("\n");
    printf("%s\n", students[max_index].name);
    printf("%s\n", students[max_index].id);
    printf("%.1f\n", students[max_index].cgpa);

    return 0;
}
