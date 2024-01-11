//Q2.Write a program to read and write data from the file.
#include <stdio.h>

int main() {
    // Open the input file for reading
    FILE *inputFile = fopen("file.in", "r");

    // Check if the input file opened successfully
    if (inputFile == NULL) {
        fprintf(stderr, "Error opening input file\n");
        return 1; // Exit with an error code
    }

    // Open the output file for writing
    FILE *outputFile = fopen("file.out", "w");

    // Check if the output file opened successfully
    if (outputFile == NULL) {
        fprintf(stderr, "Error opening output file\n");
        fclose(inputFile); // Close the input file before exiting
        return 1; // Exit with an error code
    }

    // Read data from the input file and write to the output file
    int num;
    while (fscanf(inputFile, "%d", &num) == 1) {
        // Process the read integer (in this example, just printing it to the output file)
        fprintf(outputFile, "%d\n", num);
    }

    // Close both input and output files
    fclose(inputFile);
    fclose(outputFile);

    return 0; // Exit successfully
}
