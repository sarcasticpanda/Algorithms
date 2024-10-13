#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= rows; j++) {
            // Print star for the border rows and columns
            if(i == 1 || i == rows || j == 1 || j == rows) {
                printf("* ");
            } else {
                printf("  "); // Print space inside the square
            }
        }
        printf("\n");
    }

    return 0;
}
/*
Enter the number of rows: 5
* * * * * 
*       * 
*       * 
*       * 
* * * * * 


=== Code Execution Successful ===
*/