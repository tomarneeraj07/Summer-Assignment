#include <stdio.h>
int main() {
    int rows;
    printf("Enter rows: ");
    scanf("%d", &rows);
    
    for (int r = 1; r <= rows; r++) {
        for (int s = 1; s <= rows - r; s++) printf(" ");
        for (int c = 1; c <= r; c++) printf("%c", 'A' + c - 1);
        for (int c = r - 1; c >= 1; c--) printf("%c", 'A' + c - 1);
        printf("\n");
    }
    return 0;
}