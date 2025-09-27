#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    char id[20];
    float cgpa;
};

// Function to return the index of the student with higher CGPA
int getBetterStudent(struct Student s[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].cgpa > s[maxIndex].cgpa) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main() {
    struct Student students[2];

    // Input for two students
    for (int i = 0; i < 2; i++) {
        gets(students[i].name); // Unsafe, but as per your request
        gets(students[i].id);
        scanf("%f", &students[i].cgpa);
        getchar(); // Consume newline after scanf
    }

    // Find the student with better CGPA
    int best = getBetterStudent(students, 2);

    // Print the best student's info
    printf("%s\n", students[best].name);
    printf("%s\n", students[best].id);
    printf("%.1f\n", students[best].cgpa);

    return 0;
}
