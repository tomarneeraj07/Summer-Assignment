#include <stdio.h>

int digit_sum(int value) {
    if (value == 0) return 0;
    return (value % 10) + digit_sum(value / 10);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    
    printf("Sum of digits: %d\n", digit_sum(n));
    return 0;
}