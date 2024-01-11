//Q18. Write program to make a addition of two number using pointer.

#include <stdio.h>

// Function to add two numbers using pointers
void addNumbers(int *a, int *b, int *sum) {
    *sum = *a + *b;
}

int main() {
    int num1, num2, result;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the function to add numbers using pointers
    addNumbers(&num1, &num2, &result);

    // Display the result
    printf("Sum of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
