//Q8. Pyramid Programs
 
 #include <stdio.h>

int main() {
    int rows;

    // Get the number of rows for the pyramid from the user
    printf("Enter the number of rows for the half pyramid: ");
    scanf("%d", &rows);

    // Loop to iterate through each row
    for (int i = 1; i <= rows; ++i) {
        // Loop to print '*' in each column
        for (int j = 1; j <= i; ++j) {
            printf("* ");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
//B Inverted full pyramid of *
#include <stdio.h>
int main() {
   int rows, i, j, space;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = rows; i >= 1; --i) {
      for (space = 0; space < rows - i; ++space)
         printf("  ");
      for (j = i; j <= 2 * i - 1; ++j)
         printf("* ");
      for (j = 0; j < i - 1; ++j)
         printf("* ");
      printf("\n");
   }
   return 0;
}









