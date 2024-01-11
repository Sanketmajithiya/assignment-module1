//Q1. Write a program to read data from file.
#include <stdio.h>

int main() {
    // Open the file for reading
    FILE *file = fopen("file.in", "r");

    // Check if the file opened successfully
    if (file == NULL) {
        fprintf(stderr, "Error opening file\n");
        return 1; // Exit with an error code
    }

    // Read data from the file
    int num;
    while (fscanf(file, "%d", &num) == 1) {
        // Process the read integer (in this example, just printing it)
        printf("%d\n", num);
    }

    // Close the file
    fclose(file);

    return 0; // Exit successfully
}
