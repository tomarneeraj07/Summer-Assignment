#include <stdio.h>
int main() {
    int len, key, foundIdx = -1;
    printf("Enter size: ");
    scanf("%d", &len);
    
    int items[len];
    printf("Enter elements: ");
    for (int i = 0; i < len; i++) scanf("%d", &items[i]);
    
    printf("Enter element to search: ");
    scanf("%d", &key);
    
    for (int i = 0; i < len; i++) {
        if (items[i] == key) {
            foundIdx = i;
            break;
        }
    }
    
    if (foundIdx != -1) printf("Element found at index: %d\n", foundIdx);
    else printf("Element not found\n");
    return 0;
}