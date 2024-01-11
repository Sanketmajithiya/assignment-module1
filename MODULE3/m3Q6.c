//Q6. Write a program to print the number in reverse order.

#include <stdio.h>
int main() {
    int num, reversedNum = 0, remainder;
 // Input
 printf("Enter an integer: ");
 scanf("%d", &num);

    // Reversing the number
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }


    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
