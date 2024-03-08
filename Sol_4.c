#include <stdio.h>
#include <ctype.h>

int main() {
    char input;
    int uppercase = 0, lowercase = 0, digits = 0, others = 0;

    printf("Enter a string: ");

    // Read characters until newline
    while ((input = getchar()) != '\n') {
        // Check character type
        if (isupper(input)) {
            uppercase++;
        } else if (islower(input)) {
            lowercase++;
        } else if (isdigit(input)) {
            digits++;
        } else {
            others++;
        }
    }

    printf("Uppercase characters: %d\n", uppercase);
    printf("Lowercase characters: %d\n", lowercase);
    printf("Digits: %d\n", digits);
    printf("Other characters: %d\n", others);

    return 0;
}
