#include <stdio.h>

int main() {
    long long original;
    long long reversed = 0;
    
    printf("Enter number to check palindrome: ");
    scanf("%lld", &original);
    
    // Palindrome mostly positive ya pure numbers par check hota hai
    if (original < 0) {
        printf("Not a palindrome\n");
        return 0;
    }
    
    long long temp = original;
    while (temp > 0) {
        reversed = (reversed * 10) + (temp % 10);
        temp /= 10;
    }
    
    if (original == reversed) {
        printf("%lld is a palindrome number.\n", original);
    } else {
        printf("%lld is NOT a palindrome number.\n", original);
    }
    
    return 0;
}