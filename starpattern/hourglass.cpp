#include <stdio.h>

int main() {
    int i, j, rows, space;

    printf("Enter the number of rows (half of hourglass): ");
    scanf("%d", &rows);

    // Upper half (inverted pyramid)
    for(i = rows; i >= 1; i--) {
        // Leading spaces
        for(space = 0; space < rows - i; space++) {
            printf("  ");
        }
        // Stars in decreasing order
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower half (pyramid)
    for(i = 2; i <= rows; i++) {
        // Leading spaces
        for(space = 0; space < rows - i; space++) {
            printf("  ");
        }
        // Stars in increasing order
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
/*
Enter the number of rows (half of hourglass): 5
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
*/