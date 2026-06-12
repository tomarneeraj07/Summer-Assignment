#include <stdio.h>

int main() {
    long long n;
    int total_sum = 0;
    
    printf("Enter any integer: ");
    if (scanf("%lld", &n) != 1) {
        return 1;
    }
    
    // Negative numbers ko handle karne ke liye positive bana rahe hain
    if (n < 0) {
        n = -n;
    }
    
    while (n > 0) {
        int rem = n % 10;
        total_sum += rem;
        n = n / 10;
    }
    
    printf("The sum of digits is: %d\n", total_sum);
    return 0;
}