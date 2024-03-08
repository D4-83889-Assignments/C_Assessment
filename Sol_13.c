#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if a string is palindrome
bool isPalindrome(const char *str) {
    int length = strlen(str);
    int i, j;

    // Compare characters from beginning and end of string
    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return false; // Characters don't match, not a palindrome
        }
    }
    return true; // All characters match, it's a palindrome
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from input
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
