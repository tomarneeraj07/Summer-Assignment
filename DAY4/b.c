#include <stdio.h>
int main() {
    int n, a = 0, b = 1, next;
    printf("Enter position: ");
    scanf("%d", &n);
    
    if (n == 1) printf("Term: %d\n", a);
    else {
        for (int i = 3; i <= n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        printf("Term: %d\n", b);
    }
    return 0;
}