#include <stdio.h>

int main() {
    int rows, i, j, space, k = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; --i, k = 0) {
        
        for (space = 0; space < rows - i; ++space) {
            printf("  ");
        }

        
        while (k != 2 * i - 1) {
            if (k == 0 || k == 2 * i - 2)
                printf("* ");
            else
                printf("  ");
            ++k;
        }
        printf("\n");
    }

    return 0;
}

