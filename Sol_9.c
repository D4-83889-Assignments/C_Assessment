#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STUDENTS 10
#define MAX_NAME_LENGTH 50

// Function to compare two strings for qsort
int compareNames(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    char nameOfStudents[MAX_STUDENTS][MAX_NAME_LENGTH];
    int numStudents;
    
    // Read at most 10 names
    printf("Enter the number of students (up to 10): ");
    scanf("%d", &numStudents);
    getchar(); // consume newline character
    
    if (numStudents > MAX_STUDENTS || numStudents <= 0) {
        printf("Invalid number of students!\n");
        return 1;
    }

    printf("Enter the names of students:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: ", i + 1);
        fgets(nameOfStudents[i], MAX_NAME_LENGTH, stdin);
        // Remove newline character from the end of input
        nameOfStudents[i][strcspn(nameOfStudents[i], "\n")] = '\0';
    }

    // Sort the array of names
    qsort(nameOfStudents, numStudents, sizeof(nameOfStudents[0]), compareNames);

    // Display the sorted names
    printf("\nSorted names of students:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("%s\n", nameOfStudents[i]);
    }

    return 0;
}
