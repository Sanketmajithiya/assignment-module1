//Q 14. Write a program to find out the factorial of given number using function.

#include <stdio.h>

// Function to calculate the factorial of a number
unsigned long long factorial(int num) {
    if (num == 0 || num == 1) {
        return 1; // Base case: 0! and 1! are both 1
    } else {
        // Recursive case: num! = num * (num-1)!
        return num * factorial(num - 1);
    }
}

int main() {
    int number;

    // Input the number for which factorial needs to be calculated
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    // Check if the number is non-negative
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call the function to calculate factorial
        unsigned long long result = factorial(number);

        // Display the result
        printf("The factorial of %d is: %llu\n", number, result);
    }

    return 0;
}
