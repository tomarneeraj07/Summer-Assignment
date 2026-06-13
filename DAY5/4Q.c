#include <stdio.h>
int main() {
    int n, max_p = -1;
    printf("Enter number: ");
    scanf("%d", &n);
    
    int temp = n;
    for (int i = 2; i * i <= temp; i++) {
        while (temp % i == 0) {
            max_p = i;
            temp /= i;
        }
    }
    if (temp > 1) max_p = temp;
    
    printf("Largest Prime Factor: %d\n", max_p);
    return 0;
}