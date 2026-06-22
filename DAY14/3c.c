#include <stdio.h>
int main() {
    int len;
    printf("Enter size: ");
    scanf("%d", &len);
    
    int items[len];
    printf("Enter elements: ");
    for (int i = 0; i < len; i++) scanf("%d", &items[i]);
    
    int max1 = items[0], max2 = -1;
    for (int i = 1; i < len; i++) {
        if (items[i] > max1) {
            max2 = max1;
            max1 = items[i];
        } else if (items[i] > max2 && items[i] < max1) {
            max2 = items[i];
        }
    }
    
    printf("Second Largest: %d\n", max2);
    return 0;
}