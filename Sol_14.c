#include <stdio.h>
#include <ctype.h>

#define ALPHABET_SIZE 26

int main() {
    char str[100];
    int frequency[ALPHABET_SIZE] = {0};

    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);

    // Iterate through each character of the string
    for (int i = 0; str[i] != '\0'; i++) {
        // Convert character to lowercase if it is an alphabet
        if (isalpha(str[i])) {
            char lowercaseChar = tolower(str[i]);
            // Increment the frequency of the corresponding alphabet
            frequency[lowercaseChar - 'a']++;
        }
    }

    // Display the occurrences of each alphabet
    printf("Output:\n");
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (frequency[i] > 0) {
            printf("%c:%d\n", 'A' + i, frequency[i]);
        }
    }

    return 0;
}
