//Q.11 Write a Program of find the element of given position from the array
#include <stdio.h>

int main() {
    int arr[50], size, position;

    // Input the size of the array
    printf("Enter the size of the array (not more than 50): ");
    scanf("%d", &size);

    if (size <= 0 || size > 50) {
        printf("Invalid array size. Please enter a size between 1 and 50.\n");
        return 1;  // Exit the program with an error code
    }

    // Input array elements
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input the position of the element to find
    printf("Enter the position of the element to find (1 to %d): ", size);
    scanf("%d", &position);

    // Check if the position is valid
    if (position < 1 || position > size) {
        printf("Invalid position. Please enter a position between 1 and %d.\n", size);
        return 1;  // Exit the program with an error code
    }

    // Find and display the element at the given position
    printf("Element at position %d is: %d\n", position, arr[position - 1]);

    return 0;
}
