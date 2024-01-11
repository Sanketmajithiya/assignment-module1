//Q19. Write a program to concatenate the two string using pointer.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to concatenate two strings using pointers
char *concatenateStrings(const char *str1, const char *str2) {
    // Calculate the length of the concatenated string
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int totalLength = len1 + len2;

    // Allocate memory for the concatenated string
    char *concatenatedString = (char *)malloc((totalLength + 1) * sizeof(char));

    // Check if memory allocation was successful
    if (concatenatedString == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    // Copy the first string to the concatenated string
    strcpy(concatenatedString, str1);

    // Concatenate the second string to the concatenated string
    strcat(concatenatedString, str2);

    return concatenatedString;
}

int main() {
    char str1[50], str2[50];

    // Input two strings
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Call the function to concatenate strings using pointers
    char *result = concatenateStrings(str1, str2);

    // Display the concatenated string
    printf("Concatenated String: %s\n", result);

    // Free the memory allocated for the concatenated string
    free(result);

    return 0;
}
