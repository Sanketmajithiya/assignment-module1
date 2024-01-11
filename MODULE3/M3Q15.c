//Q15. Write a program to print the Fibonacci series using function
#include <stdio.h>

// Function to print Fibonacci series up to n terms
void printFibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series up to %d terms: ", n);

    for (int i = 1; i <= n; i++) {
        printf("%d, ", first);

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
}

int main() {
    int terms;

    // Input the number of terms for Fibonacci series
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &terms);

    // Check if the number of terms is valid
    if (terms <= 0) {
        printf("Number of terms should be a positive integer.\n");
    } else {
        // Call the function to print Fibonacci series
        printFibonacci(terms);
    }

    return 0;
}
