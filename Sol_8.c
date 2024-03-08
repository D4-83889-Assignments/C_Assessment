#include <stdio.h>

// Function to convert integer to binary and print
void printBinary(int number) {
    int binary[32];
    int i = 0;

    // Convert number to binary
    while (number > 0) {
        binary[i] = number % 2;
        number /= 2;
        i++;
    }

    // Print binary equivalent in reverse order
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int number;

    // Accept integer number
    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Print binary equivalent
    printBinary(number);

    // Print octal equivalent
    printf("Octal equivalent: %o\n", number);

    // Print hexadecimal equivalent
    printf("Hexadecimal equivalent: %X\n", number);

    return 0;
}
