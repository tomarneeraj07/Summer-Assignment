#include <stdio.h>

int main() {
    int total_terms;
    int current_num = 1;
    int final_sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &total_terms);

    // Using while loop for problem
    while (current_num <= total_terms) {
        final_sum = final_sum + current_num;
        current_num++;
    }

    printf("The sum of first %d natural numbers is: %d\n", total_terms, final_sum);
    return 0;
}