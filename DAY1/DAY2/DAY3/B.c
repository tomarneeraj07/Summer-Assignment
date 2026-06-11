#include <stdio.h>
int main() {
    int low, high;
    printf("Enter range: ");
    scanf("%d %d", &low, &high);
    
    for (int i = low; i <= high; i++) {
        if (i <= 1) continue;
        int p = 1;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) { p = 0; break; }
        }
        if (p == 1) printf("%d ", i);
    }
    printf("\n");
    return 0;
}