//Q4   Write a program of to find out the Area of Triangle, Rectangle and Circle using Switch Case .(Must Be Menu Driven)

#include <stdio.h>

int main() {
    int choice;
    float area;

    while (1) {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Calculate the area of a Triangle\n");
        printf("2. Calculate the area of a Rectangle\n");
        printf("3. Calculate the area of a Circle\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Area of Triangle
                {
                    float base, height;
                    printf("Enter the base and height of the Triangle: ");
                    scanf("%f %f", &base, &height);
                    area = 0.5 * base * height;
                    printf("Area of Triangle: %.2f\n", area);
                }
                break;

            case 2: // Area of Rectangle
                {
                    float length, width;
                    printf("Enter the length and width of the Rectangle: ");
                    scanf("%f %f", &length, &width);
                    area = length * width;
                    printf("Area of Rectangle: %.2f\n", area);
                }
                break;

            case 3: // Area of Circle
                {
                    float radius;
                    printf("Enter the radius of the Circle: ");
                    scanf("%f", &radius);
                    area = 3.14 * radius * radius;
                    printf("Area of Circle: %.2f\n", area);
                }
                break;

            case 4: // Exit
                printf("Exiting the program. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}
