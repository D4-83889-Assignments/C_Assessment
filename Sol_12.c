#include <stdio.h>
#include <string.h>

#define MAX_SIZE 10

int main() {
    char *strings[MAX_SIZE] = {"apple", "banana", "apple", "orange", "banana", "grape", "apple", "kiwi", "orange", "mango"};
    int count[MAX_SIZE] = {0};
    int i, j;

    // Find duplicates
    for (i = 0; i < MAX_SIZE - 1; i++) {
        for (j = i + 1; j < MAX_SIZE; j++) {
            if (strcmp(strings[i], strings[j]) == 0) {
                count[i]++;
                count[j]++;
            }
        }
    }

    // Display duplicates
    printf("Duplicate strings:\n");
    for (i = 0; i < MAX_SIZE; i++) {
        if (count[i] > 1) {
            printf("%s\n", strings[i]);
        }
    }

    return 0;
}
