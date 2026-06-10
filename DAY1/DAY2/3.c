#include <stdio.h>

int main() {
    long long value;
    long long product = 1;
    
    printf("Enter number: ");
    scanf("%lld", &value);
    
    if (value == 0) {
        product = 0;
    } else {
        if (value < 0) {
            value = -value;
        }
        while (value > 0) {
            product *= (value % 10);
            value /= 10;
        }
    }
    
    printf("Product of digits: %lld\n", product);
    return 0;
}