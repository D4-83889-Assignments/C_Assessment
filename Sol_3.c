#include <stdio.h>
#include<string.h>

int main() {
    int marks[5];
    int totalMarks = 0;
    char grade[3];

    printf("Enter marks for 5 subjects out of 20:\n");

    // Input marks for each subject
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        totalMarks += marks[i];
    }

    // Calculate totalMarks marks

    // Determine grade
    if (totalMarks >= 90) {
        strcpy(grade,"Ex");
    } else if (totalMarks >= 80 && totalMarks<90) {
        strcpy(grade,"A");
    } else if (totalMarks >= 70 && totalMarks<80) {
        strcpy(grade,"B");
    } else if (totalMarks >= 60 && totalMarks<70) {
        strcpy(grade,"C");
    } else {
        strcpy(grade,"F");
    }

    printf("totalMarks Marks: %d\n", totalMarks);
    printf("Grade: %s\n", grade);

    return 0;
}
