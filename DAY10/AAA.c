#include <stdio.h>
int main() {
    int rows;
    printf("Enter rows: ");
    scanf("%d", &rows);
    
    for (int r = 1; r <= rows; r++) {
        for (int s = 1; s <= rows - r; s++) printf(" ");
        for (int c = 1; c <= (2 * r - 1); c++) printf("*");
        printf("\n");
    }
    return 0;
}