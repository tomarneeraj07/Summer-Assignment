#include <stdio.h>
int main() {
    int low, high, r, sum, temp;
    printf("Enter range: ");
    scanf("%d %d", &low, &high);
    
    for (int i = low; i <= high; i++) {
        temp = i;
        sum = 0;
        while (temp > 0) {
            r = temp % 10;
            sum = sum + (r * r * r);
            temp = temp / 10;
        }
        if (i == sum) printf("%d ", i);
    }
    printf("\n");
    return 0;
}