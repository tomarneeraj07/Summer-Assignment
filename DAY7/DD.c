#include <stdio.h>

int rev_num(int n, int rev) {
    if (n == 0) return rev;
    return rev_num(n / 10, rev * 10 + (n % 10));
}

int main() {
    int input_val;
    printf("Enter number to reverse: ");
    scanf("%d", &input_val);
    
    printf("Reversed: %d\n", rev_num(input_val, 0));
    return 0;
}