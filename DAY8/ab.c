#include <stdio.h>
int main() {
    int rows;
    printf("Enter rows: ");
    scanf("%d", &rows);
    
    for (int r = 1; r <= rows; r++) {
        for (int c = 1; c <= r; c++) printf("*");
        printf("\n");
    }
    return 0;
}