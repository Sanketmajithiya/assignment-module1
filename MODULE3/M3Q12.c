//Q.12. Write a program to find out the Max number from given Matrix
#include <stdio.h>

#define MAX_ROWS  3
#define MAX_COLS  3

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int max, i, j;

    // Input the matrix elements
    printf("Enter the matrix elements (%d x %d):\n", MAX_ROWS, MAX_COLS);
    for (i = 0; i < MAX_ROWS; i++) {
        for (j = 0; j < MAX_COLS; j++) {
            printf("Element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Assume the first element as the maximum
    max = matrix[0][0];

    // Iterate through the matrix to find the maximum
    for (i = 0; i < MAX_ROWS; i++) {
        for (j = 0; j < MAX_COLS; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    // Display the maximum number
    printf("The maximum number in the matrix is: %d\n", max);

    return 0;
}
