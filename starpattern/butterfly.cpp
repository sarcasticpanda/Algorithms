#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter the number of rows (half of butterfly): ");
    scanf("%d", &rows);

    // Upper half of the butterfly
    for(i = 1; i <= rows; i++) {
        // Left side of the butterfly
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        // Spaces in the middle
        for(j = 1; j <= 2*(rows - i); j++) {
            printf("  ");
        }
        // Right side of the butterfly
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower half of the butterfly
    for(i = rows; i >= 1; i--) {
        // Left side of the butterfly
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        // Spaces in the middle
        for(j = 1; j <= 2*(rows - i); j++) {
            printf("  ");
        }
        // Right side of the butterfly
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
/* Enter the number of rows (half of butterfly): 5
*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 


=== Code Execution Successful ===

*/