#include <stdio.h>

int get_fibo(int pos) {
    if (pos == 1) return 0;
    if (pos == 2) return 1;
    return get_fibo(pos - 1) + get_fibo(pos - 2);
}

int main() {
    int n;
    printf("Enter position: ");
    scanf("%d", &n);
    
    printf("Fibonacci Term: %d\n", get_fibo(n));
    return 0;
}