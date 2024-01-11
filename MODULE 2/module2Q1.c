#include <stdio.h>

int main() {
    float number, square, cube;

    // Taking user input
    printf("Enter a number: ");
    scanf("%f", &number);

    // Calculating square and cube
    square = number * number;
    cube = number * number * number;

    // Displaying the results
    printf("Square of %.2f is: %.2f\n", number, square);
    printf("Cube of %.2f is: %.2f\n", number, cube);

    return 0;
}
