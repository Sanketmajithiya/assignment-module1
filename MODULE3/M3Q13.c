//13. Write a program to copy string from one string to another string with user define function 
#include <stdio.h>

// Function to copy a string from source to destination
void stringCopy(char *destination, const char *source) {
    // Iterate through each character and copy to destination
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }

    // Add null terminator to the destination string
    *destination = '\0';
}

int main() {
    char sourceString[100], destinationString[100];

    // Input the source string
    printf("Enter the source string: ");
    scanf("%s", sourceString);

    // Call the user-defined function to copy the string
    stringCopy(destinationString, sourceString);

    // Display the original and copied strings
    printf("Source String: %s\n", sourceString);
    printf("Copied String: %s\n", destinationString);

    return 0;
}
