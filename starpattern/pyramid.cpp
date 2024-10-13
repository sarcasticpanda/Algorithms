#include <stdio.h>

int main() {
    int i, j, rows, space;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        for(space = i; space < rows; space++) {
            printf("  "); // print space
        }
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("* "); // print star
        }
        printf("\n");
    }

    return 0;
}
/*

Enter the number of rows: 5
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 

*/