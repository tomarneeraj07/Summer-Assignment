#include <stdio.h>

int getSum(int val1, int val2) {
    return val1 + val2;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Sum: %d\n", getSum(num1, num2));
    return 0;
}