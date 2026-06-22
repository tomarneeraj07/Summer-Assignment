#include <stdio.h>
int main() {
    int size;
    float total = 0;
    printf("Enter size: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    
    printf("Sum = %.0f\n", total);
    printf("Average = %.2f\n", total / size);
    return 0;
}