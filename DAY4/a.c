#include <stdio.h>

int main() {
    int terms, first = 0, second = 1, next;
    
    printf("Enter number of terms: ");
    scanf("%d", &terms);
    
    for (int count = 1; count <= terms; count++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
    return 0;
}