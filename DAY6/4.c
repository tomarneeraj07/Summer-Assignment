#include <stdio.h>
int main() {
    int x, n;
    long long res = 1;
    printf("Enter base (x) and power (n): ");
    scanf("%d %d", &x, &n);
    
    for (int i = 1; i <= n; i++) {
        res = res * x;
    }
    
    printf("Result: %lld\n", res);
    return 0;
}