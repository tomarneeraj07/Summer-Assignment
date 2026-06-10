#include <stdio.h>

int main() {
    long long input_num;
    long long reversed_num = 0;
    
    printf("Enter a number to reverse: ");
    scanf("%lld", &input_num);
    
    int is_negative = 0;
    if (input_num < 0) {
        is_negative = 1;
        input_num = -input_num;
    }
    
    while (input_num > 0) {
        int digit = input_num % 10;
        reversed_num = (reversed_num * 10) + digit;
        input_num /= 10;
    }
    
    if (is_negative) {
        reversed_num = -reversed_num;
    }
    
    printf("Reversed number: %lld\n", reversed_num);
    return 0;
}