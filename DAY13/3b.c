#include <stdio.h>
int main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int maxVal = arr[0], minVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
        if (arr[i] < minVal) minVal = arr[i];
    }
    
    printf("Largest: %d\n", maxVal);
    printf("Smallest: %d\n", minVal);
    return 0;
}