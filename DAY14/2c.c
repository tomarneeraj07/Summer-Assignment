#include <stdio.h>
int main() {
    int len, target, freq = 0;
    printf("Enter size: ");
    scanf("%d", &len);
    
    int items[len];
    printf("Enter elements: ");
    for (int i = 0; i < len; i++) scanf("%d", &items[i]);
    
    printf("Enter element to count: ");
    scanf("%d", &target);
    
    for (int i = 0; i < len; i++) {
        if (items[i] == target) freq++;
    }
    
    printf("Frequency: %d\n", freq);
    return 0;
}