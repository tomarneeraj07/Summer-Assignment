#include <stdio.h>
int main() {
    int rows;
    printf("Enter rows: ");
    scanf("%d", &rows);
    
    for (int r = 1; r <= rows; r++) {
        char ch = 'A';
        for (int c = 1; c <= r; c++) printf("%c", ch++);
        printf("\n");
    }
    return 0;
}