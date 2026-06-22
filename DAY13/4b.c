#include <stdio.h>
int main() {
    int size, evenCount = 0, oddCount = 0;
    printf("Enter size: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) evenCount++;
        else oddCount++;
    }
    
    printf("Even elements: %d\n", evenCount);
    printf("Odd elements: %d\n", oddCount);
    return 0;
}