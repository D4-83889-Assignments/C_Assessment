#include <stdio.h>
#include <string.h>

// Function to reverse the letters in a string
void reverseString(char *str) {
    int length = strlen(str);
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        // Swap characters at position i and j
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from input
    str[strcspn(str, "\n")] = '\0';

    printf("Original string: %s\n", str);

    // Reverse the string
    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
