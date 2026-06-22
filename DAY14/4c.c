#include <stdio.h>
int main() {
    int len;
    printf("Enter size: ");
    scanf("%d", &len);
    
    int items[len];
    printf("Enter elements: ");
    for (int i = 0; i < len; i++) scanf("%d", &items[i]);
    
    printf("Duplicate elements: ");
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (items[i] == items[j]) {
                printf("%d ", items[i]);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}