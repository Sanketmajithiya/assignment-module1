//Q1.	Write a Program to check the given year is leap year or not.

#include <stdio.h>

int main() {
    int year;

    // Taking user input for the year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Checking if it's a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
    }
