#include <stdio.h>
#include <stdlib.h>

// Structure to represent a student
struct Student {
    char name[50];
    char rollNo[20];
    int totalMarks;
};

// Function to read student data
struct Student readStudentData() {
    struct Student student;

    printf("Enter student name: ");
    fgets(student.name, sizeof(student.name), stdin);
    printf("Enter roll number: ");
    fgets(student.rollNo, sizeof(student.rollNo), stdin);
    printf("Enter total marks obtained: ");
    scanf("%d", &student.totalMarks);

    return student;
}

// Function to display student data
void displayStudentData(struct Student student) {
    printf("\nStudent Details\n");
    printf("Name: %s", student.name);
    printf("Roll Number: %s", student.rollNo);
    printf("Total Marks: %d\n", student.totalMarks);
}

int main() {
    struct Student student;

    // Read student data
    student = readStudentData();

    // Display student data
    displayStudentData(student);

    return 0;
}
