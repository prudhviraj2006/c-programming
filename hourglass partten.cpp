#include <stdio.h>

int main() {
    int rows, i, j, space;

    printf("Enter number of rows (odd number): ");
    scanf("%d", &rows);

    if (rows % 2 == 0) {
        printf("Number of rows must be an odd number.\n");
        return 1;
    }

    
    for (i = 1; i <= (rows + 1) / 2; i++) {
        for (space = 1; space < i; space++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * ((rows + 1) / 2) - (2 * i) + 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    
    for (i = (rows - 1) / 2; i >= 1; i--) {
        for (space = i; space > 1; space--) {
            printf(" ");
        }
        for (j = 1; j <= (2 * ((rows + 1) / 2) - (2 * i) + 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

