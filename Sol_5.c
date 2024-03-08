#include <stdio.h>

#define ROWS1 3 // Number of rows in matrix 1
#define COLS1 3 // Number of columns in matrix 1
#define ROWS2 3 // Number of rows in matrix 2
#define COLS2 3 // Number of columns in matrix 2

int main() {
    int matrix1[ROWS1][COLS1] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[ROWS2][COLS2] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[ROWS1][COLS2];

    // Perform matrix multiplication
    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COLS1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the result
    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < ROWS1; i++) {
        for (int j = 0; j < COLS2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
