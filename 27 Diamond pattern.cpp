#include <stdio.h>

int main() {
    int rows, i, j, space;

    printf("Enter number of rows (odd number): ");
    scanf("%d", &rows);

    if (rows % 2 == 0) {
        printf("Number of rows must be an odd number.\n");
        return 1;
    }

    
    for (i = 1; i <= rows; i += 2) {
        for (space = 0; space < (rows - i) / 2; space++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (i = rows - 2; i >= 1; i -= 2) {
        for (space = 0; space < (rows - i) / 2; space++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

