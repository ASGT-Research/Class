
#include <stdio.h>
#include <string.h>

// Define structure for student data
struct Student {
    int student_no;
    char student_name[50];
    float student_marks;
};

int main() {
    // Declare array of structures for 10 students
    struct Student students[10];

    // Read data for 10 students
    printf("Enter data for 10 students:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d:\n", i + 1);
        printf("Enter student number: ");
        scanf("%d", &students[i].student_no);
        printf("Enter student name: ");
        scanf("%s", students[i].student_name);
        printf("Enter student marks: ");
        scanf("%f", &students[i].student_marks);
        printf("\n");
    }

    // Display data for students with marks > 80
    printf("Students with marks greater than 80:\n");
    for (int i = 0; i < 10; i++) {
        if (students[i].student_marks > 80) {
            printf("Student Number: %d\n", students[i].student_no);
            printf("Student Name: %s\n", students[i].student_name);
            printf("Student Marks: %.2f\n\n", students[i].student_marks);
        }
    }

    return 0;}
