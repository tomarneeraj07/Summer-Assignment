#include <stdio.h>
int main() {
    int n, count = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    
    int temp = n;
    while (temp > 0) {
        if (temp & 1) {
            count++;
        }
        temp = temp >> 1; // Right shift operator, ekdam dhasu logic
    }
    
    printf("Total set bits: %d\n", count);
    return 0;
}