#include <stdio.h>

int main() {
    int target_num;
    long long factorial_result = 1;

    printf("Enter a number to find factorial: ");
    scanf("%d", &target_num);

    if (target_num < 0) {
        printf("Error: Factorial of negative numbers doesn't exist.\n");
    } else {
        int temp = target_num;
        while (temp > 1) {
            factorial_result *= temp;
            temp--;
        }
        printf("Factorial of %d is: %lld\n", target_num, factorial_result);
    }

    return 0;
}