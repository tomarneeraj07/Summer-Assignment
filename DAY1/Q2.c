#include <stdio.h>

int main() {
    int input_number;
    int multiplier = 1;

    printf("Enter a number to print its table: ");
    scanf("%d", &input_number);

    printf("--- Multiplication Table of %d ---\n", input_number);
    while (multiplier <= 10) {
        int product = input_number * multiplier;
        printf("%d x %d = %d\n", input_number, multiplier, product);
        multiplier++;
    }

    return 0;
}