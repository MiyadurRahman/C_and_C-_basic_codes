#include <stdio.h>
struct student {
char name[50];
int id ;
int marks[5];
float avg;
};

int addStudent(struct student students[], int count) {
    int i, total = 0;

    printf("Enter student name: ");
    scanf("%s", students[count].name);

    printf("Enter student ID: ");
    scanf("%d", &students[count].id);

    printf("Enter marks for 5 subjects: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &students[count].marks[i]);
        total = total + students[count].marks[i];
    }

    students[count].avg = total / 5.0;

    printf("Student added successfully.\n");
    return count + 1;

}
void displayallstdent(struct student students[], int count){

if(count==0)
{
printf("not data to display");
return;
}
int i,j;
 printf("Student Records:\n");
    for (i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Marks: [", students[i].id, students[i].name);
        for (j = 0; j < 5; j++) {
            printf("%d", students[i].marks[j]);
            if (j < 4) {
                printf(", ");
            }
        }
        printf("], Average: %.1f\n", students[i].avg);
    }
}
void findTopPerformer(struct student students[], int count) {
    int i, topIndex = 0;

    if (count == 0) {
        printf("No students available.\n");
        return;
    }

    for (i = 1; i < count; i++) {
        if (students[i].avg > students[topIndex].avg) {
            topIndex = i;
        }
    }

    printf("Top Performer: %s, Average Marks: %.1f\n", students[topIndex].name, students[topIndex].avg);
}


void findFailingStudents(struct student students[], int count) {
    int i, j, failCount, found = 0;

    printf("Failing Students:\n");

    for (i = 0; i < count; i++) {
        failCount = 0;
        for (j = 0; j < 5; j++) {
            if (students[i].marks[j] < 40) {
                failCount = failCount + 1;
            }
        }
        if (failCount > 0) {
            printf("ID: %d, Name: %s, Failed Subjects: %d\n", students[i].id, students[i].name, failCount);
            found = 1;
        }
    }

    if (!found) {
        printf("No failing students found.\n");
    }
}
int main(){
    struct student students[100];
    int count=0;
    
int choice;
while(1){

printf("student performace management system \n");
printf("1.add a new student");
printf("2.display all student");
printf("3.find top performer");
printf("4.find failing student ");
printf("5.exit");
scanf("%d",&choice);
if(choice==1){
  count=addStudent( students,count);

}
else if(choice==2)
{
    displayallstdent( students, count);
}
else if(choice == 3){
    findTopPerformer( students, count);

}
else if(choice==4){
findFailingStudents( students,  count);
    
}
else 
printf("exit");









}




}