#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter the number of rows (for half the heart): ");
    scanf("%d", &rows);

    // Upper half of the heart
    for(i = rows / 2; i <= rows; i += 2) {
        // Left side spaces
        for(j = 1; j < rows - i; j += 2) {
            printf("  ");
        }
        // Left side stars
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        // Middle spaces
        for(j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        // Right side stars
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower inverted pyramid (base of the heart)
    for(i = rows; i >= 1; i--) {
        // Leading spaces
        for(j = i; j < rows; j++) {
            printf("  ");
        }
        // Stars for the base
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
/*

Enter the number of rows (for half the heart): 6
  * * *       * * * 
* * * * *   * * * * * 
* * * * * * * * * * * 
  * * * * * * * * * 
    * * * * * * * 
      * * * * * 
        * * * 
          * 


=== Code Execution Successful ===
*/