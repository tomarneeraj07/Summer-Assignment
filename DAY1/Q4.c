#include <stdio.h>

int main() {
    long long user_num;
    int digit_count = 0;

    printf("Enter any integer number: ");
    scanf("%lld", &user_num);

    // Storing original value for printing later
    long long original_value = user_num; 

    // do-while loop ensures it works perfectly even if the input is 0
    do {
        digit_count++;
        user_num = user_num / 10;
    } while (user_num != 0);

    printf("Total number of digits in %lld is: %d\n", original_value, digit_count);
    return 0;
}