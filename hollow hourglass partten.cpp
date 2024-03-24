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
        printf("*");
        for (j = 1; j <= (rows - 2 * (i - 1)) - 2; j++) {
            printf(" ");
        }
        if (i != (rows + 1) / 2) {
            printf("*");
        }
        printf("\n");
    }

    
    for (i = (rows + 1) / 2 - 1; i >= 1; i--) {
        for (space = 1; space < i; space++) {
            printf(" ");
        }
        printf("*");
        for (j = 1; j <= (rows - 2 * (i - 1)) - 2; j++) {
            printf(" ");
        }
        if (i != 1) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

