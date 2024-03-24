#include <stdio.h>

int main() {
    int num;
    long square;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

    
    square = (long)num * num;

    
    printf("Square of %d = %ld\n", num, square);

    return 0;
}

