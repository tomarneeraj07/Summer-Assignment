#include <stdio.h>

long long find_fact(int num) {
    if (num <= 1) return 1;
    return num * find_fact(num - 1);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    
    printf("Factorial: %lld\n", find_fact(n));
    return 0;
}