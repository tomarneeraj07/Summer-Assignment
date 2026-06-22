#include <stdio.h>

int isPrimeNumber(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) count++;
    }
    return (count == 2) ? 1 : 0;
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    
    if (isPrimeNumber(num)) printf("Prime\n");
    else printf("Not Prime\n");
    return 0;
}