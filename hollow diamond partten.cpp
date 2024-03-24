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
        for (space = 1; space <= (rows + 1) / 2 - i; space++) {
            printf(" ");
        }
        printf("*");
        if (i > 1) {
            for (j = 1; j <= 2 * i - 3; j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    
    for (i = (rows + 1) / 2 - 1; i >= 1; i--) {
        for (space = 1; space <= (rows + 1) / 2 - i; space++) {
            printf(" ");
        }
        printf("*");
        if (i > 1) {
            for (j = 1; j <= 2 * i - 3; j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

