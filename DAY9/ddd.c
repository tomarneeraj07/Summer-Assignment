#include <stdio.h>
int main() {
    int side;
    printf("Enter side: ");
    scanf("%d", &side);
    
    for (int r = 1; r <= side; r++) {
        for (int c = 1; c <= side; c++) {
            if (r == 1 || r == side || c == 1 || c == side) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}