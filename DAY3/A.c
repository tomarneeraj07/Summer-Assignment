#include <stdio.h>
int main() {
    int n, c = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) c++;
    }
    
    if (c == 2) printf("Prime\n");
    else printf("Not Prime\n");
    return 0;
}