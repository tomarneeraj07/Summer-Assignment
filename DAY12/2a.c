#include <stdio.h>

int isArmstrong(int n) {
    int sum = 0, temp = n, rem;
    while (temp > 0) {
        rem = temp % 10;
        sum += (rem * rem * rem);
        temp /= 10;
    }
    return (n == sum);
}

int main() {
    int num;
    printf("Enter 3-digit number: ");
    scanf("%d", &num);
    
    if (isArmstrong(num)) printf("Armstrong\n");
    else printf("Not Armstrong\n");
    return 0;
}