//Q7. Write a program make a summation of given number(E.g. 1523 ans :-11)

#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    // Input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculating the sum of digits
    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    // Output
    printf("Sum of digits: %d\n", sum);

    return 0;
}
