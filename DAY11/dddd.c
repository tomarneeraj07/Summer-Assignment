#include <stdio.h>

long long getFactorial(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    
    printf("Factorial: %lld\n", getFactorial(num));
    return 0;
}