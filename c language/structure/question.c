#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int id;
    int marks[5];
    int total_marks;
};

// Function to calculate total marks of a student
int calculate_total(struct student s) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += s.marks[i];
    }
    return sum;
}

int main() {
    int n = 0, i, j;
    struct student students[100]; // max 100 students
    int data_entered = 0;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Input student data\n");
        printf("2. Calculate total marks for each student\n");
        printf("3. Display highest scorer for each CT\n");
        printf("4. Display total marks for all students\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter number of students (max 100): ");
                scanf("%d", &n);
                for (i = 0; i < n; i++) {
                    printf("Enter name for student %d: ", i+1);
                    scanf(" %[^\n]", students[i].name);
                    printf("Enter ID for student %d: ", i+1);
                    scanf("%d", &students[i].id);
                    printf("Enter marks for 5 CTs for student %d: ", i+1);
                    for (j = 0; j < 5; j++) {
                        scanf("%d", &students[i].marks[j]);
                    }
                }
                data_entered = 1;
                break;

            case 2:
                if (!data_entered) {
                    printf("Please input student data first.\n");
                    break;
                }
                for (i = 0; i < n; i++) {
                    students[i].total_marks = calculate_total(students[i]);
                }
                printf("Total marks calculated for all students.\n");
                break;

            case 3:
                if (!data_entered) {
                    printf("Please input student data first.\n");
                    break;
                }
                for (j = 0; j < 5; j++) {
                    int max_marks = students[0].marks[j];
                    int max_index = 0;
                    for (i = 1; i < n; i++) {
                        if (students[i].marks[j] > max_marks) {
                            max_marks = students[i].marks[j];
                            max_index = i;
                        }
                    }
                    printf("Highest scorer in CT %d: %s (marks: %d)\n", j + 1, students[max_index].name, max_marks);
                }
                break;

            case 4:
                if (!data_entered) {
                    printf("Please input student data first.\n");
                    break;
                }
                printf("\nTotal marks for each student:\n");
                for (i = 0; i < n; i++) {
                    printf("Name: %s, ID: %d, Total Marks: %d\n", students[i].name, students[i].id, students[i].total_marks);
                }
                break;

            case 5:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
