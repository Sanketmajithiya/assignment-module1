#include <stdio.h>
int main() {
    int marks[5];
    int total = 0;
    float percentage;

    // Taking input for 5 subjects' marks
    printf("Enter the marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    // Calculating percentage
    percentage = (float)total / 5;

    // Printing the percentage
    printf("Total marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    // Checking the percentage and determining the grade
    if (percentage > 75) {
        printf("Grade: Distinction\n");
    } else if (percentage > 60 && percentage <= 75) {
        printf("Grade: First class\n");
    } else if (percentage > 50 && percentage <= 60) {
        printf("Grade: Second class\n");
    } else if (percentage > 35 && percentage <= 50) {
        printf("Grade: Pass class\n");
    } else {
        printf("Grade: Fail\n");
    }
return 0;
}



